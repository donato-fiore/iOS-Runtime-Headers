// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDSTATEPROVIDER_H
#define DBDASHBOARDSTATEPROVIDER_H

@class NSString, CARObserverHashTable;
@protocol DBWorkspaceObserver, DBHomeViewPageChangeObserving;

#import <Foundation/Foundation.h>

#import "DBDashboard.h"

@interface DBDashboardStateProvider : NSObject <DBWorkspaceObserver, DBHomeViewPageChangeObserving>



@property (copy, nonatomic) NSString *activeBundleIdentifier; // ivar: _activeBundleIdentifier
@property (nonatomic) BOOL connectionReady; // ivar: _connectionReady
@property (readonly, weak, nonatomic) DBDashboard *dashboard; // ivar: _dashboard
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lockoutState; // ivar: _lockoutState
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic) NSUInteger pageType; // ivar: _pageType
@property (readonly) Class superclass;


-(id)initWithDashboard:(id)arg0 ;
-(void)_refreshObservations;
-(void)addObserver:(id)arg0 ;
-(void)homeViewController:(id)arg0 didChangeToPageIndex:(NSInteger)arg1 firstIconPageIndex:(NSInteger)arg2 minimumPageIndex:(NSInteger)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)workspace:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;


@end


#endif