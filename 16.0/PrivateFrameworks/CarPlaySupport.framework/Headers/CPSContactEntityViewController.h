// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSCONTACTENTITYVIEWCONTROLLER_H
#define CPSCONTACTENTITYVIEWCONTROLLER_H

@class UILayoutGuide, NSString, NSArray;
@protocol CPSActionButtonLayoutDelegate;


#import "CPSBaseEntityContentViewController.h"
#import "CPSActionsViewController.h"
#import "CPSAvatarViewController.h"
#import "CPSNameViewController.h"

@interface CPSContactEntityViewController : CPSBaseEntityContentViewController <CPSActionButtonLayoutDelegate>



@property (readonly, nonatomic) CPSActionsViewController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide; // ivar: _avatarAndDetailsLayoutGuide
@property (readonly, nonatomic) CPSAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UILayoutGuide *centeringLayoutGuide; // ivar: _centeringLayoutGuide
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (readonly, nonatomic) CPSNameViewController *nameViewController; // ivar: _nameViewController
@property (readonly) Class superclass;


-(BOOL)buttonsShouldFill;
-(id)initWithEntity:(id)arg0 resourceProvider:(id)arg1 ;
-(id)personEntity;
-(void)configureButton:(id)arg0 ;
-(void)didUpdateEntity:(id)arg0 ;
-(void)setupLayoutConstraints;
-(void)setupLayoutGuides;
-(void)setupViewControllers;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif