// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCOMPOSETABLEVIEWCELL_H
#define CNCOMPOSETABLEVIEWCELL_H

@class NUITableViewContainerCell, NSString, UILabel, UIColor, NUIContainerStackView;
@protocol NUIContainerViewDelegate;


#import "CNComposeRecipient.h"

@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate>



@property (readonly, nonatomic) BOOL canCollapseRecipient;
@property (readonly, nonatomic) BOOL canExpandRecipient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (retain, nonatomic) NUIContainerStackView *labelViewStack; // ivar: _labelViewStack
@property (retain, nonatomic) CNComposeRecipient *recipient; // ivar: _recipient
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAvatarView;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat trailingButtonMidlineInsetFromLayoutMargin; // ivar: _trailingButtonMidlineInsetFromLayoutMargin
@property (readonly, nonatomic) CGFloat trailingButtonWidth; // ivar: _trailingButtonWidth


+(CGFloat)additionalSeparatorInset;
+(Class)containerViewClass;
+(id)axCappedFontWithTextStyle:(id)arg0 bold:(BOOL)arg1 ;
+(id)axCappedSymbolConfigurationIsBold:(BOOL)arg0 ;
+(id)identifier;
+(void)requireIntrinsicSizeForView:(id)arg0 ;
-(CGFloat)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelWithTextStyle:(id)arg0 ;
-(id)titleTextStyle;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)labelsChangedWidth:(CGFloat)arg0 ;
-(void)layoutMarginsDidChange;


@end


#endif