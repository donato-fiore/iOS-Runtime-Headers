// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYBUTTONTABLEVIEWHEADERVIEW_H
#define HUACCESSORYBUTTONTABLEVIEWHEADERVIEW_H

@class UITableViewHeaderFooterView, UIButton, UIFont, NSString, HFItemSection;
@protocol HFItemSectionAccessoryButtonHeader;



@interface HUAccessoryButtonTableViewHeaderView : UITableViewHeaderFooterView <HFItemSectionAccessoryButtonHeader>



@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) UIFont *accessoryButtonFont; // ivar: _accessoryButtonFont
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItemSection *itemSection; // ivar: itemSection
@property (retain, nonatomic) NSString *overrideAccessoryButtonTitle; // ivar: _overrideAccessoryButtonTitle
@property (readonly) Class superclass;


-(id)defaultAccessoryButtonFont;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif