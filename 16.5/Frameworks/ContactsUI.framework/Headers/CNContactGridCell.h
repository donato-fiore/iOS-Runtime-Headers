// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTGRIDCELL_H
#define CNCONTACTGRIDCELL_H

@class UICollectionViewCell, NSArray, UIView, CNContact, CNContactFormatter, UILabel, NSDictionary;
@protocol CNAvatarViewDelegate><CNQuickActionsViewDelegate;


#import "CNContactGridClippingView.h"
#import "CNQuickActionsManager.h"
#import "CNQuickActionsView.h"
#import "CNAvatarView.h"

@interface CNContactGridCell : UICollectionViewCell

@property (copy, nonatomic) NSArray *actionCategories; // ivar: _actionCategories
@property (retain, nonatomic) CNContactGridClippingView *actionsClippingView; // ivar: _actionsClippingView
@property (retain, nonatomic) UIView *actionsContainerView; // ivar: _actionsContainerView
@property (retain, nonatomic) CNQuickActionsManager *actionsManager; // ivar: _actionsManager
@property (retain, nonatomic) CNQuickActionsView *actionsView; // ivar: _actionsView
@property (nonatomic) UIEdgeInsets avatarMargins; // ivar: _avatarMargins
@property (nonatomic) CGSize avatarSize; // ivar: _avatarSize
@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (weak, nonatomic) NSObject<CNAvatarViewDelegate><CNQuickActionsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat maximumActionsWidth;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (copy, nonatomic) NSDictionary *nameTextAttributes; // ivar: _nameTextAttributes
@property (nonatomic) BOOL showsContactOnTap; // ivar: _showsContactOnTap


+(CGFloat)actionsLeftMargin;
-(id)animationBlockForPreparingToShowActions:(SEL)arg0 ;
-(id)completionBlockForHidingActions:(SEL)arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_createViewsIfNeeded;
-(void)_updateActionsMask;
-(void)updateConstraints;


@end


#endif