// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSFOCUSACTIVITYINDICATOR_H
#define CSFOCUSACTIVITYINDICATOR_H

@class UICoverSheetButton, NSString, _UILegibilitySettings;
@protocol SBUILegibility, FCActivityDescribing;



@interface CSFocusActivityIndicator : UICoverSheetButton <SBUILegibility>

 {
    id<FCActivityDescribing> *_previousActivity;
}


@property (retain, nonatomic) NSObject<FCActivityDescribing> *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;


-(NSInteger)_userInterfaceStyleForCurrentActivity;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setSelected:(BOOL)arg0 ;
-(void)_updateForActivity;
-(void)_updateStyle;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif