// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSFINETUNECONTROLLER_H
#define DBSFINETUNECONTROLLER_H

@class PSListController, NSNumberFormatter, NSNumber, CADisplayPreset, PSSpecifier;



@interface DBSFineTuneController : PSListController {
    NSNumberFormatter *_xyNumberFormatter;
    NSNumberFormatter *_luminanceNumberFormatter;
    NSNumber *_measuredWhitePointX;
    NSNumber *_measuredWhitePointY;
    NSNumber *_measuredLuminance;
    NSNumber *_targetWhitePointX;
    NSNumber *_targetWhitePointY;
    NSNumber *_targetLuminance;
    CADisplayPreset *_currentPreset;
    PSSpecifier *_measuredWhitePointXSpecifier;
    PSSpecifier *_measuredWhitePointYSpecifier;
    PSSpecifier *_measuredLuminanceSpecifier;
    PSSpecifier *_targetWhitePointXSpecifier;
    PSSpecifier *_targetWhitePointYSpecifier;
    PSSpecifier *_targetLuminanceSpecifier;
    PSSpecifier *_restoreDefaultsSpecifier;
}




-(id)getMeasuredLuminance:(id)arg0 ;
-(id)getMeasuredWhitePointX:(id)arg0 ;
-(id)getMeasuredWhitePointY:(id)arg0 ;
-(id)getTargetLuminance:(id)arg0 ;
-(id)getTargetWhitePointX:(id)arg0 ;
-(id)getTargetWhitePointY:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)restoreDefaults:(id)arg0 ;
-(void)setMeasuredLuminance:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setMeasuredWhitePointX:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setMeasuredWhitePointY:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setTargetLuminance:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setTargetWhitePointX:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setTargetWhitePointY:(id)arg0 forSpecifier:(id)arg1 ;
-(void)updateTargetLuminanceValidationRange;
-(void)updateValidationRanges;
-(void)userDidTapCancel:(id)arg0 ;
-(void)userDidTapDone:(id)arg0 ;
-(void)validateUserAdjustment;
-(void)viewDidLoad;


@end


#endif