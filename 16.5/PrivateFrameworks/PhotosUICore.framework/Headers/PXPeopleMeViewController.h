// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEMEVIEWCONTROLLER_H
#define PXPEOPLEMEVIEWCONTROLLER_H

@class UIViewController, UIButton, UILabel;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;


#import "PXPeopleScalableAvatarView.h"

@interface PXPeopleMeViewController : UIViewController

@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (readonly, nonatomic) NSObject<PXPeopleMeViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) UIButton *denyButton; // ivar: _denyButton
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (readonly, nonatomic) CGFloat preferredHeight;
@property (retain) NSObject<PXPerson> *suggestedPerson; // ivar: _suggestedPerson


-(id)_buttonWithTitle:(id)arg0 action:(SEL)arg1 destructive:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 dismissHandler:(id)arg1 ;
-(void)_confirmMe:(id)arg0 ;
-(void)_dismissViewControllerAsConfirmed:(BOOL)arg0 ;
-(void)_rejectMe:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif