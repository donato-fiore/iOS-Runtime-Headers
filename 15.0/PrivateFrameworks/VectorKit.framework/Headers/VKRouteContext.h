// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKROUTECONTEXT_H
#define VKROUTECONTEXT_H

@class NSHashTable, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "VKRouteInfo.h"

@interface VKRouteContext : NSObject {
    BOOL _hasContextChangedForLabels;
    NSHashTable *_labelObservers;
    BOOL _hasContextChangedForRouteLine;
    NSHashTable *_routeLineObservers;
    BOOL _hasContextChangedForAlternateRouteLines;
    NSHashTable *_alternateRouteLineObservers;
    multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>> _shareSections;
}


@property (retain, nonatomic) NSString *accessPointEntryName; // ivar: _accessPointEntryName
@property (retain, nonatomic) NSString *accessPointExitName; // ivar: _accessPointExitName
@property (retain, nonatomic) NSArray *alternateRoutes; // ivar: _alternateRoutes
@property (nonatomic) NSInteger currentSegmentIndex; // ivar: _currentSegmentIndex
@property (nonatomic) NSInteger currentStepIndex; // ivar: _currentStepIndex
@property (nonatomic) NSInteger inspectedSegmentIndex; // ivar: _inspectedSegmentIndex
@property (nonatomic) NSInteger inspectedStepIndex; // ivar: _inspectedStepIndex
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) ? puckLocation; // ivar: _puckLocation
@property (nonatomic) float puckRadius; // ivar: _puckRadius
@property (nonatomic) NSUInteger puckSnappedStopID; // ivar: _puckSnappedStopID
@property (readonly, nonatomic) VKRouteInfo *routeInfo; // ivar: _routeInfo
@property (nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property (nonatomic) BOOL snappingToTransitLines; // ivar: _snappingToTransitLines
@property (readonly, nonatomic) NSUInteger totalRouteCount;
@property (readonly, nonatomic) unsigned char useType; // ivar: _useType


-(id)_hashTableForObserverType:(unsigned char)arg0 ;
-(id)description;
-(id)initWithComposedRoute:(id)arg0 useType:(unsigned char)arg1 ;
-(id)initWithRouteInfo:(id)arg0 useType:(unsigned char)arg1 ;
-(void)_setHasContextChangedForObserverType:(unsigned char)arg0 withValue:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 withType:(unsigned char)arg1 ;
-(void)addShareSections:(struct ? *)arg0 shareCount:(unsigned int)arg1 ;
-(void)dealloc;
-(void)forEachRouteInfo:(id)arg0 ;
-(void)forEachSectionWithShareCount:(unsigned int)arg0 dothis:(id)arg1 ;
-(void)removeObserver:(id)arg0 withType:(unsigned char)arg1 ;
-(void)resetNotificationsForObserverType:(unsigned char)arg0 ;


@end


#endif