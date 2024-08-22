// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQLIFTUIPRESENTER_H
#define ICQLIFTUIPRESENTER_H

@class NSString, NSURL;
@protocol _TtP13iCloudQuotaUI14LiftUIDelegate_, ICQLiftUIPresenterDelegate;

#import <Foundation/Foundation.h>

#import "_TtC13iCloudQuotaUI19ICQLiftUIDataSource.h"

@interface ICQLiftUIPresenter : NSObject <_TtP13iCloudQuotaUI14LiftUIDelegate_>



@property (retain, nonatomic) _TtC13iCloudQuotaUI19ICQLiftUIDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQLiftUIPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *liftUIPageURL; // ivar: _liftUIPageURL
@property (readonly) Class superclass;


-(id)initWithURL:(id)arg0 account:(id)arg1 ;
-(void)didDismiss;
-(void)presentInViewController:(id)arg0 ;
-(void)pushInNavigationController:(id)arg0 ;
-(void)reloadWithHeaders:(id)arg0 ;


@end


#endif