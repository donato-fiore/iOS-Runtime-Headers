// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSECTIONHEADERVIEW_H
#define HUQUICKCONTROLSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIButton, NSArray, NSString, NSAttributedString, HFItemSection, UILabel;
@protocol HFItemSectionAccessoryButtonHeader, HFItemSectionAccessoryButtonHeaderDelegate;



@interface HUQuickControlSectionHeaderView : UICollectionReusableView <HFItemSectionAccessoryButtonHeader>



@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) NSArray *accessoryButtonConstraints; // ivar: _accessoryButtonConstraints
@property (weak, nonatomic) NSObject<HFItemSectionAccessoryButtonHeaderDelegate> *accessoryButtonTarget; // ivar: _accessoryButtonTarget
@property (retain, nonatomic) NSString *accessoryButtonTitleText; // ivar: _accessoryButtonTitleText
@property (retain, nonatomic) NSAttributedString *attributedTitleText; // ivar: _attributedTitleText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideAccessoryButton; // ivar: _hideAccessoryButton
@property (nonatomic) BOOL hideHeaderText; // ivar: _hideHeaderText
@property (nonatomic) BOOL hideSeparator; // ivar: _hideSeparator
@property (retain, nonatomic) HFItemSection *itemSection; // ivar: itemSection
@property (retain, nonatomic) NSArray *labelConstraints; // ivar: _labelConstraints
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


+(BOOL)requiresConstraintBasedLayout;
+(CGFloat)estimatedHeight;
+(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setHidden:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif