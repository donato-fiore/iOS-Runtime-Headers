// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKGLOBELINECONTAINER_H
#define VKGLOBELINECONTAINER_H

@protocol VKRouteMatchedAnnotationPresentation, VKGlobeLineContainerDelegate;

#import <Foundation/Foundation.h>


@interface VKGlobeLineContainer : NSObject {
    id<VKRouteMatchedAnnotationPresentation> *_routeLineSplitAnnotation;
    set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> _overlays;
    set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> _persistentOverlays;
    set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> _nonPersistentOverlays;
    *void _routeRenderLayer;
    map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::allocator<std::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;
    _retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _selectedPolyline;
    *VKGlobeRouteSplit _routeSplit;
}


@property (nonatomic) NSObject<VKGlobeLineContainerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;


-(*void)nonPersistentOverlays;
-(*void)overlays;
-(*void)persistentOverlays;
-(BOOL)hasNonPersistentOverlay:(*id)arg0 ;
-(BOOL)hasPersistentOverlay:(*id)arg0 ;
-(float)halfWidthForLine:(id)arg0 styleZ:(float)arg1 ;
-(id)initWithRouteRenderLayer:(*void)arg0 ;
-(void)_addOverlay:(id)arg0 ;
-(void)_destroyLinesIfNeeded;
-(void)_recreateLinesIfNeeded;
-(void)_removeOverlay:(id)arg0 ;
-(void)_updateRouteSplit;
-(void)addLine:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> )arg0 ;
-(void)addNonPersistentOverlay:(id)arg0 ;
-(void)addPersistentOverlay:(id)arg0 ;
-(void)clearLineSelection;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeLine:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> )arg0 ;
-(void)removeNonPersistentOverlay:(id)arg0 ;
-(void)removePersistentOverlay:(id)arg0 ;
-(void)setSelected:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> )arg0 selected:(BOOL)arg1 ;
-(void)update;


@end


#endif