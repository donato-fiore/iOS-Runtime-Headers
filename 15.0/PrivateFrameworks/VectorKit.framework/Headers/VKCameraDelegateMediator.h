// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCAMERADELEGATEMEDIATOR_H
#define VKCAMERADELEGATEMEDIATOR_H

@class NSString;
@protocol VKMapViewCameraDelegate;

#import <Foundation/Foundation.h>


@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate>

 {
    NSUInteger _regionChangeCount;
}


@property (nonatomic) NSObject<VKMapViewCameraDelegate> *cameraDelegate; // ivar: _cameraDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isChangingMapType; // ivar: _isChangingMapType
@property (readonly) Class superclass;


-(id)init;
-(id)mapLayerPresentationForAnnotation:(id)arg0 ;
-(void)mapLayerCanEnter3DModeDidChange:(BOOL)arg0 ;
-(void)mapLayerCanZoomInDidChange:(BOOL)arg0 ;
-(void)mapLayerCanZoomOutDidChange:(BOOL)arg0 ;
-(void)mapLayerDidBecomePitched:(BOOL)arg0 ;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg0 ;
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerDidFinishInitialTrackingAnimation;
-(void)mapLayerMuninAvailabilityDidChange:(NSInteger)arg0 ;
-(void)mapLayerNavigationCameraDidLeaveDefaultZoom;
-(void)mapLayerNavigationCameraDidReturnToDefaultZoom;
-(void)mapLayerNavigationCameraHasStartedPanning;
-(void)mapLayerNavigationCameraHasStoppedPanning;
-(void)mapLayerWasUnableToAnimate;
-(void)mapLayerWillAnimateToLocation:(struct ? )arg0 ;
-(void)mapLayerWillChangeRegionAnimated:(BOOL)arg0 ;


@end


#endif