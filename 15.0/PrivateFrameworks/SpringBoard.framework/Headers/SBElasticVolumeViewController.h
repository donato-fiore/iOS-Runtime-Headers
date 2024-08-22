// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBELASTICVOLUMEVIEWCONTROLLER_H
#define SBELASTICVOLUMEVIEWCONTROLLER_H

@class NSString, MRUVolumeHUDRouteDescriptionProvider;
@protocol MRUVolumeHUDRouteDescriptionProviderDelegate;


#import "SBElasticValueViewController.h"
#import "SBTelephonyManager.h"
#import "SBConferenceManager.h"

@interface SBElasticVolumeViewController : SBElasticValueViewController <MRUVolumeHUDRouteDescriptionProviderDelegate>

 {
    NSString *_volumeString;
    NSString *_highVolumeString;
    int _anyCallActive;
    SBTelephonyManager *_telephonyManager;
    SBConferenceManager *_conferenceManager;
    NSUInteger _audioRouteCount;
    NSInteger _audioRouteType;
    NSUInteger _debugOverrideAudioRouteCount;
    NSInteger _debugOverrideAudioRouteType;
    BOOL _mediaProvidedRouteDisplayInfoNeedsUpdate;
    MRUVolumeHUDRouteDescriptionProvider *_routeDescriptionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_anyCallActive;
-(BOOL)_updateAnyCallActive;
-(BOOL)_useMediaControlsRouteProvider;
-(BOOL)updateActiveRouteDisplay:(*id)arg0 ;
-(CGFloat)interactiveValueUpdateDiscontinuityInterval;
-(NSUInteger)layoutAxisForInterfaceOrientation:(NSInteger)arg0 ;
-(id)createSliderView;
-(id)dataSource;
-(id)initWithDataSource:(id)arg0 conferenceManager:(id)arg1 telephonyManager:(id)arg2 ;
-(id)log;
-(id)overrideDisplayNameForRoute:(id)arg0 ;
-(id)sliderAccessibilityIdentifier;
-(void)_activeCallStatusStateChanged:(id)arg0 ;
-(void)_debugHandleNextRoute;
-(void)_debugHandleResetRoute;
-(void)dealloc;
-(void)reloadData;
-(void)viewDidLoad;
-(void)volumeHUDRouteDescriptionProvider:(id)arg0 didChangeOutputDeviceAsset:(id)arg1 ;


@end


#endif