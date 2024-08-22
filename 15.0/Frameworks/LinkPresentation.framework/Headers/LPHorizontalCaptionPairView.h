// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPHORIZONTALCAPTIONPAIRVIEW_H
#define LPHORIZONTALCAPTIONPAIRVIEW_H

@class UIButton, NSRegularExpression;
@protocol LPTextStyleable, LPContentInsettable;


#import "LPComponentView.h"
#import "LPTextView.h"
#import "LPCaptionButtonPresentationProperties.h"

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable>

 {
    LPTextView *_leftView;
    LPTextView *_rightView;
    LPCaptionButtonPresentationProperties *_buttonProperties;
    UIEdgeInsets _contentInset;
    NSInteger _balancingMode;
    UIButton *_button;
}


@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // ivar: _emphasizedTextExpression
@property (nonatomic) NSInteger overrideMaximumNumberOfLines; // ivar: _overrideMaximumNumberOfLines


-(CGFloat)ascender;
-(CGFloat)descender;
-(CGFloat)firstLineLeading;
-(CGFloat)lastLineDescent;
-(NSInteger)computedNumberOfLines;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 leadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4 button:(id)arg5 balancingMode:(NSInteger)arg6 ;
-(struct CGSize )_layoutCaptionPairForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)layoutComponentView;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif