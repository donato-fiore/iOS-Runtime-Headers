// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETLABELVIEW_H
#define OKWIDGETLABELVIEW_H



#import "OKWidgetLabelViewProxy.h"

@interface OKWidgetLabelView : OKWidgetLabelViewProxy



+(id)supportedSettings;
-(BOOL)settingAdjustsFontSizeToFitWidth;
-(NSInteger)settingBaselineAdjustment;
-(NSInteger)settingLineBreakMode;
-(NSInteger)settingNumberOfLine;
-(float)settingMinimumScaleFactor;
-(id)initWithWidget:(id)arg0 ;
-(id)settingAttributedText;
-(id)settingTextShadowColor;
-(struct CGSize )settingTextShadowOffset;
-(void)setSettingAdjustsFontSizeToFitWidth:(BOOL)arg0 ;
-(void)setSettingAttributedText:(id)arg0 ;
-(void)setSettingBaselineAdjustment:(NSInteger)arg0 ;
-(void)setSettingFontFileName:(id)arg0 ;
-(void)setSettingLineBreakMode:(NSInteger)arg0 ;
-(void)setSettingMinimumScaleFactor:(float)arg0 ;
-(void)setSettingNumberOfLines:(NSInteger)arg0 ;
-(void)setSettingTextShadowColor:(id)arg0 ;
-(void)setSettingTextShadowOffset:(struct CGSize )arg0 ;


@end


#endif