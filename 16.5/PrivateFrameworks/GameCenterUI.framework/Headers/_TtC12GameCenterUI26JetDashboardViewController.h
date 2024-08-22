// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI26JETDASHBOARDVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI26JETDASHBOARDVIEWCONTROLLER_H

@class TtC12GameCenterUI33BaseSplitCollectionViewController, PSRootController, PSSpecifier;
@protocol GKPlayerAvatarViewDelegate;


#import "_TtC12GameCenterUI18BaseSplitPresenter.h"

@interface _TtC12GameCenterUI26JetDashboardViewController : TtC12GameCenterUI33BaseSplitCollectionViewController <GKPlayerAvatarViewDelegate>

 {
    ? dashboardPresenter;
    ? launchContext;
    ? request;
    ? clippingLayer;
    ? badageablePhotoView;
    ? landscapeBadageablePhotoView;
    ? profileBadgeCount;
}


@property (nonatomic, retain) PSRootController *_rootController; // ivar: _rootController
@property (nonatomic, retain) PSSpecifier *_specifier; // ivar: _specifier
@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;


-(id)initWithCoder:(id)arg0 ;
-(void)didSelectPlayerAvatarView:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif