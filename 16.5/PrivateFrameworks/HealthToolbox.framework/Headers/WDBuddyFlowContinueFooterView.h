// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDBUDDYFLOWCONTINUEFOOTERVIEW_H
#define WDBUDDYFLOWCONTINUEFOOTERVIEW_H

@class UIView, NSString, OBBoldTrayButton, UIButton;



@interface WDBuddyFlowContinueFooterView : UIView {
    CGFloat _width;
    CGFloat _bottomInset;
    NSString *_buttonText;
    OBBoldTrayButton *_continueTrayButton;
}


@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 bottomInset:(CGFloat)arg2 width:(CGFloat)arg3 isLastScreen:(BOOL)arg4 ;
-(void)_updateForCurrentSizeCategory;
-(void)resetWaitingState;
-(void)setWaitingState;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif