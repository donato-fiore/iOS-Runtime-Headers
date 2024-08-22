// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSTATUSTEXTVIEW_H
#define CSSTATUSTEXTVIEW_H

@class UIView, SBUILegibilityLabel, NSString, NSArray, _UILegibilitySettings;
@protocol SBUILegibility;



@interface CSStatusTextView : UIView <SBUILegibility>

 {
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    SBUILegibilityLabel *_provisionalEnrollmentLabel;
    NSUInteger _transactionCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *deviceInformationText; // ivar: _deviceInformationText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *internalLegalText; // ivar: _internalLegalText
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *provisionalEnrollmentText; // ivar: _provisionalEnrollmentText
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *supervisionText; // ivar: _supervisionText


-(CGFloat)_lineHeightOfNonLegalLabels;
-(CGFloat)_nonLegalLabelFontLeading;
-(CGFloat)_nonLegalTextParagraphSpacing;
-(CGFloat)_spacingBetweenNonLegalLabels;
-(id)_font;
-(id)_largeFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateDeviceInformationLabel;
-(void)_updateInternalLegalLabel;
-(void)_updateLegibilityStrength;
-(void)_updateProvisionalEnrollmentLabel;
-(void)_updateSupervisionLabel;
-(void)_updateTextViews;
-(void)_updateTextViewsIfNecessary;
-(void)layoutSubviews;
-(void)updateTextsWithBlock:(id)arg0 ;


@end


#endif