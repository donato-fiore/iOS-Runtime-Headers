// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTBANNERVIEW_H
#define CNCONTACTLISTBANNERVIEW_H

@class UIView, NSArray, CNContactStore, NSString, UIDragInteraction, UILabel, NSLayoutConstraint, CNContactFormatter, UIGestureRecognizer, CNContact, CALayer;
@protocol UIDragInteractionDelegate, CNContactListBannerViewDelegate;


#import "CNContactListStyleApplier.h"

@interface CNContactListBannerView : UIView <UIDragInteractionDelegate>



@property (retain, nonatomic) UIView *avatarView; // ivar: _avatarView
@property (readonly, nonatomic) UIView *avatarViewContainer; // ivar: _avatarViewContainer
@property (readonly, nonatomic) UIView *bottomSeparator; // ivar: _bottomSeparator
@property (retain, nonatomic) NSArray *constraintsPendingActivation; // ivar: _constraintsPendingActivation
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // ivar: _contactListStyleApplier
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactListBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly, nonatomic) UIView *footnoteContainer; // ivar: _footnoteContainer
@property (readonly, nonatomic) UILabel *footnoteLabel; // ivar: _footnoteLabel
@property (retain, nonatomic) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint; // ivar: _footnoteTitleToTitleVerticalConstraint
@property (retain, nonatomic) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint; // ivar: _footnoteTitleToValueHorizontalSpaceConstraint
@property (readonly, nonatomic) UILabel *footnoteValueLabel; // ivar: _footnoteValueLabel
@property (readonly, nonatomic) CNContactFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIGestureRecognizer *longPress; // ivar: _longPress
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) CALayer *topSeparator; // ivar: _topSeparator


+(id)descriptorForRequiredKeys;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)displaysContactInfo;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)activatePendingConstraints;
-(void)applyStyle;
-(void)cellWasLongPressed:(id)arg0 ;
-(void)cellWasSingleTapped:(id)arg0 ;
-(void)configureDragInteraction;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)menuDidHide:(id)arg0 ;
-(void)showMenu;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFontRelatedConstraints;


@end


#endif