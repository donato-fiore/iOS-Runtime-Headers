// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBELASTICBRIGHTNESSVIEWCONTROLLER_H
#define SBELASTICBRIGHTNESSVIEWCONTROLLER_H



#import "SBElasticValueViewController.h"

@interface SBElasticBrightnessViewController : SBElasticValueViewController {
    NSInteger _activeBrightnessRoute;
    NSInteger _debugOverrideBrightnessRoute;
}




-(BOOL)updateActiveRouteDisplay:(*id)arg0 ;
-(NSUInteger)layoutAxisForInterfaceOrientation:(NSInteger)arg0 ;
-(id)dataSource;
-(id)initWithDataSource:(id)arg0 ;
-(id)log;
-(id)sliderAccessibilityIdentifier;
-(void)_debugHandleNextRoute;
-(void)_debugHandleResetRoute;
-(void)noteContinuousValueInteractionDidEnd;
-(void)noteContinuousValueInteractionWillBegin;
-(void)viewDidLoad;


@end


#endif