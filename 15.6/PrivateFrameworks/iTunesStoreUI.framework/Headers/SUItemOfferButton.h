// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUITEMOFFERBUTTON_H
#define SUITEMOFFERBUTTON_H

@class UIButton, NSString;



@interface SUItemOfferButton : UIButton

@property (nonatomic) NSInteger animationHorizontalAlignment; // ivar: _animationHorizontalAlignment
@property (copy, nonatomic) NSString *confirmationTitle; // ivar: _confirmationTitle
@property (copy, nonatomic) NSString *itemOfferButtonStyle; // ivar: _buttonStyle
@property (copy, nonatomic) NSString *offerTitle; // ivar: _offerTitle
@property (nonatomic) BOOL shouldShowConfirmation; // ivar: _shouldShowConfirmation
@property (nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation; // ivar: _isShowingConfirmation


+(CGFloat)defaultAnimationDuration;
+(id)itemOfferButtonStyleForItem:(id)arg0 offer:(id)arg1 ;
-(BOOL)configureForItem:(id)arg0 offer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_configurationForStyle:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyConfiguration:(struct ? )arg0 ;
-(void)_reloadButton;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif