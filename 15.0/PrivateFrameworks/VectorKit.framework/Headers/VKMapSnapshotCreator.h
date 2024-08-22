// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMAPSNAPSHOTCREATOR_H
#define VKMAPSNAPSHOTCREATOR_H

@class NSString, GEOPOICategoryFilter;
@protocol MapEngineDelegate, VKNotificationObserverDelegate, VKRouteOverlay;

#import <Foundation/Foundation.h>

#import "VKMapImageCanvas.h"
#import "VKGlobeImageCanvas.h"
#import "VKNotificationObserver.h"
#import "VKRouteContext.h"

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKNotificationObserverDelegate>

 {
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    int _mapType;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    id *_completion;
    unique_ptr<md::MapEngine, std::default_delete<md::MapEngine>> _mapEngine;
    shared_ptr<md::TaskContext> _taskContext;
    BOOL _didSoftDealloc;
    VKNotificationObserver *_notificationObserver;
    NSUInteger _signpostId;
    *? _displayStyles;
    NSUInteger _displayStylesCount;
    NSUInteger _nextDisplayStyleIndex;
    vector<CGImage *, std::allocator<CGImage *>> _images;
    vector<__IOSurface *, std::allocator<__IOSurface *>> _ioSurfaces;
    Stopwatch _timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) VKEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) unsigned char emphasis;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOPOICategoryFilter *pointsOfInterestFilter; // ivar: _pointsOfInterestFilter
@property (retain, nonatomic) VKRouteContext *routeContext; // ivar: _routeContext
@property (retain, nonatomic) NSObject<VKRouteOverlay> *routeOverlay; // ivar: _routeOverlay
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsGlobe;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsRoadLabels;
@property (nonatomic) BOOL showsRoadShields;
@property (nonatomic) BOOL showsVenues;
@property (readonly) CGSize size;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger terrainMode;


+(BOOL)supportsSharingThumbnails;
-(*void)_labelSettings;
-(BOOL)_daVinciDataAvailable;
-(BOOL)_elevatedGroundIsEnabled;
-(BOOL)_globeIsEnabled;
-(BOOL)canChangeVenueFocus;
-(BOOL)wantsTimerTick;
-(id)activeCanvas;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 homeQueue:(id)arg2 signpostId:(NSUInteger)arg3 mapType:(int)arg4 mapDisplayStyles:(struct ? *)arg5 mapDisplayStylesCount:(NSUInteger)arg6 auditToken:(id)arg7 ;
-(void)_transferSettingsFrom:(id)arg0 to:(id)arg1 ;
-(void)addCustomFeatureDataSource:(id)arg0 ;
-(void)cancel;
-(void)cancelFlushingTileDecodes:(BOOL)arg0 ;
-(void)dealloc;
-(void)didFinishLoadingData;
-(void)didFinishLoadingDataWithError:(id)arg0 ;
-(void)didPresent;
-(void)didReceiveMemoryWarning;
-(void)didStartLoadingData;
-(void)didUpdateSceneStatus:(unsigned char)arg0 ;
-(void)labelManagerDidLayout;
-(void)labelMarkerDidChangeState:(*void)arg0 ;
-(void)nearestVenueDidChange:(*void)arg0 building:(*void)arg1 ;
-(void)removeCustomFeatureDataSource:(id)arg0 ;
-(void)renderNextSnapshot;
-(void)renderSnapshot:(id)arg0 ;
-(void)selectedLabelMarkerWillDisappear:(*void)arg0 ;
-(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 ;
-(void)setClearFontCache:(BOOL)arg0 ;
-(void)setLabelExclusionRegions:(id)arg0 ;
-(void)setMapRegion:(id)arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 ;
-(void)softDealloc;
-(void)venueCreated:(*void)arg0 building:(*void)arg1 ;
-(void)willBecomeFullyDrawn;
-(void)willLayoutWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif