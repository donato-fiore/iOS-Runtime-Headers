// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSYNDICATIONVIEWCONTROLLER_H
#define CNSYNDICATIONVIEWCONTROLLER_H

@class UIViewController, UIView, CNContactFormatter, CNContact, UILabel, NSString;
@protocol CNActionsViewProtocol;


#import "CNActionsView.h"
#import "CNGroupIdentityInlineActionsViewConfiguration.h"
#import "CNGroupIdentity.h"
#import "CNGroupAvatarViewController.h"

@interface CNSyndicationViewController : UIViewController <CNActionsViewProtocol>



@property (retain, nonatomic) UIView *actionsContainerView; // ivar: _actionsContainerView
@property (retain, nonatomic) CNActionsView *actionsView; // ivar: _actionsView
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration; // ivar: _actionsViewConfiguration
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNGroupIdentity *group; // ivar: _group
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController; // ivar: _groupAvatarViewController
@property (retain, nonatomic) UIView *nameContainerView; // ivar: _nameContainerView
@property (retain, nonatomic) CNContact *senderContact; // ivar: _senderContact
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)descriptorForRequiredKeys;
-(id)initWithGroup:(id)arg0 senderContact:(id)arg1 actionsViewConfiguration:(id)arg2 ;
-(id)subtitleTextForSenderContact:(id)arg0 ;
-(void)didSelectAction:(id)arg0 withSourceView:(id)arg1 longPress:(BOOL)arg2 ;
-(void)setupActionViews;
-(void)setupContainerViews;
-(void)setupNameViews;
-(void)viewDidLoad;


@end


#endif