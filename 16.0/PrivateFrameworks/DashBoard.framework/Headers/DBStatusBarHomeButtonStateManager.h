// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSTATUSBARHOMEBUTTONSTATEMANAGER_H
#define DBSTATUSBARHOMEBUTTONSTATEMANAGER_H

@class NSString;
@protocol DBDashboardViewStateObserving, DBHomeViewPageChangeObserving, DBStatusBarButtonStateManagerDelegate;

#import <Foundation/Foundation.h>


@interface DBStatusBarHomeButtonStateManager : NSObject <DBDashboardViewStateObserving, DBHomeViewPageChangeObserving>



@property (nonatomic) NSInteger currentPageIndex; // ivar: _currentPageIndex
@property (nonatomic) NSUInteger currentViewState; // ivar: _currentViewState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBStatusBarButtonStateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger firstIconPageIndex; // ivar: _firstIconPageIndex
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger minimumPageIndex; // ivar: _minimumPageIndex
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_updateHomeButtonState;
-(void)dashboardRootViewController:(id)arg0 didChangeToViewState:(NSUInteger)arg1 ;
-(void)homeViewController:(id)arg0 didChangeToPageIndex:(NSInteger)arg1 firstIconPageIndex:(NSInteger)arg2 minimumPageIndex:(NSInteger)arg3 ;


@end


#endif