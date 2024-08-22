// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI29APPSTORECONTENTVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI29APPSTORECONTENTVIEWCONTROLLER_H

@class TtC12GameCenterUI18BaseViewController, UIScrollView;


#import "_TtC12GameCenterUI18BootstrapPresenter.h"

@interface _TtC12GameCenterUI29AppStoreContentViewController : TtC12GameCenterUI18BaseViewController {
    ? dataPresenter;
    ? appStoreContentView;
    ? startTime;
}


@property (nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter; // ivar: bootstrapPresenter
@property (nonatomic, readonly) UIScrollView *scrollView;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGameRecord:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif