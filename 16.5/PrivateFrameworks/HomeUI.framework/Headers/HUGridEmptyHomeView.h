// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDEMPTYHOMEVIEW_H
#define HUGRIDEMPTYHOMEVIEW_H

@class UIView, NSArray, UILabel;
@protocol HUGridEmptyHomeViewDelegate;


#import "HUColoredButton.h"
#import "HUChevronButton.h"

@interface HUGridEmptyHomeView : UIView

@property (retain, nonatomic) HUColoredButton *addAccessoryButton; // ivar: _addAccessoryButton
@property (readonly, nonatomic) BOOL canAddAccessories;
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (weak, nonatomic) NSObject<HUGridEmptyHomeViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *instructionsLabel; // ivar: _instructionsLabel
@property (retain, nonatomic) HUChevronButton *learnToAddAccessoryButton; // ivar: _learnToAddAccessoryButton
@property (retain, nonatomic) HUChevronButton *storeButton; // ivar: _storeButton


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addNewAccessory:(id)arg0 ;
-(void)_openLearnToAddAccessories:(id)arg0 ;
-(void)_openStore:(id)arg0 ;
-(void)_setupCommonAppearance;
-(void)didMoveToSuperview;
-(void)tintColorDidChange;
-(void)updateConstraints;


@end


#endif