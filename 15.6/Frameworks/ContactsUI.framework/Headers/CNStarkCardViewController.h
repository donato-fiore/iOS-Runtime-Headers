// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSTARKCARDVIEWCONTROLLER_H
#define CNSTARKCARDVIEWCONTROLLER_H

@class UIViewController, UILayoutGuide, CNContact, NSString, NSArray;
@protocol CNContactContentViewControllerDelegate;


#import "CNStarkActionsController.h"
#import "CNAvatarViewController.h"
#import "CNStarkContactInfoViewController.h"

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate>



@property (readonly, nonatomic) CNStarkActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide; // ivar: _avatarAndDetailsLayoutGuide
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UILayoutGuide *centeringLayoutGuide; // ivar: _centeringLayoutGuide
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNStarkContactInfoViewController *contactInfoViewController; // ivar: _contactInfoViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedContactProperties; // ivar: _displayedContactProperties
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
+(id)starkCardControllerForCalendarEventWithContact:(id)arg0 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 displayedContactProperties:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)setupLayoutConstraints;
-(void)setupLayoutGuides;
-(void)setupViewControllers;
-(void)showMore:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavigationItems;
-(void)updateViewConstraints;
-(void)updateViewControllers;
-(void)viewDidLoad;


@end


#endif