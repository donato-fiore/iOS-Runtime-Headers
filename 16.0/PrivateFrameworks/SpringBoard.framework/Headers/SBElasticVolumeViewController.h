// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBELASTICVOLUMEVIEWCONTROLLER_H
#define SBELASTICVOLUMEVIEWCONTROLLER_H

@class UIImageSymbolConfiguration, MRUVolumeHUDRouteDescriptionProvider, NSString;
@protocol MRUVolumeHUDRouteDescriptionProviderDelegate;


#import "SBElasticValueViewController.h"

@interface SBElasticVolumeViewController : SBElasticValueViewController <MRUVolumeHUDRouteDescriptionProviderDelegate>

 {
    BOOL _mediaProvidedRouteDisplayInfoNeedsUpdate;
    UIImageSymbolConfiguration *_routeImageSymbolConfiguration;
    MRUVolumeHUDRouteDescriptionProvider *_routeDescriptionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updateActiveRouteDisplay:(*id)arg0 ;
-(CGFloat)interactiveValueUpdateDiscontinuityInterval;
-(NSUInteger)layoutAxisForInterfaceOrientation:(NSInteger)arg0 ;
-(id)createSliderView;
-(id)dataSource;
-(id)initWithDataSource:(id)arg0 ;
-(id)log;
-(id)sliderAccessibilityIdentifier;
-(void)_debugHandleNextRoute;
-(void)_debugHandleResetRoute;
-(void)volumeHUDRouteDescriptionProvider:(id)arg0 didChangeOutputDeviceAsset:(id)arg1 ;


@end


#endif