// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPAGEZOOMSTEPPERCONTROLLER_H
#define SFPAGEZOOMSTEPPERCONTROLLER_H

@class WBSPageZoomPreferenceManager, NSNumberFormatter, NSString;
@protocol _SFSettingsAlertStepperController, _SFBrowserDocument, _SFSettingsAlertStepperConfiguration;

#import <Foundation/Foundation.h>


@interface SFPageZoomStepperController : NSObject <_SFSettingsAlertStepperController>

 {
    WBSPageZoomPreferenceManager *_preferenceManager;
    id<_SFBrowserDocument> *_tab;
    NSNumberFormatter *_percentFormatter;
    id<_SFSettingsAlertStepperConfiguration> *_stepper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDocument:(id)arg0 preferenceManager:(id)arg1 ;
-(id)longestTextForButton:(NSInteger)arg0 ;
-(void)_pageZoomChanged:(id)arg0 ;
-(void)_updateButtonsEnabledOnMainQueueWithZoomFactor:(CGFloat)arg0 ;
-(void)_updateButtonsEnabledWithZoomFactor:(CGFloat)arg0 ;
-(void)dealloc;
-(void)decrementValue:(id)arg0 ;
-(void)incrementValue:(id)arg0 ;
-(void)prepareStepper:(id)arg0 ;
-(void)resetValue:(id)arg0 ;


@end


#endif