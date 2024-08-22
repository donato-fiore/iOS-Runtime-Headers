// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBNAVIGATIONSTATEPROVIDER_H
#define DBNAVIGATIONSTATEPROVIDER_H

@class CARActiveNavigationIdentifiersObserver, NSString, NSArray, CARObserverHashTable;
@protocol CARActiveNavigationIdentifiersObserving, BSInvalidatable, DBAppHistoryObserving, DBAppHistoryAppDockProviding, DBIconProviding, DBNavigationAppInfoProviding;

#import <Foundation/Foundation.h>


@interface DBNavigationStateProvider : NSObject <CARActiveNavigationIdentifiersObserving, BSInvalidatable, DBAppHistoryObserving>



@property (retain, nonatomic) CARActiveNavigationIdentifiersObserver *activeNavigationIdentifiersObserver; // ivar: _activeNavigationIdentifiersObserver
@property (weak, nonatomic) NSObject<DBAppHistoryAppDockProviding> *appHistoryAppDockProvider; // ivar: _appHistoryAppDockProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<DBIconProviding> *iconProvider; // ivar: _iconProvider
@property (weak, nonatomic) NSObject<DBNavigationAppInfoProviding> *infoProvider; // ivar: _infoProvider
@property (readonly, nonatomic) NSString *mostRecentClusterNavigatingApp;
@property (readonly, nonatomic) NSString *mostRecentDashboardNavigatingApp;
@property (readonly, nonatomic) NSString *mostRecentNavigatingApp;
@property (copy, nonatomic) NSString *mostRecentlyActivatedClusterApp; // ivar: _mostRecentlyActivatedClusterApp
@property (copy, nonatomic) NSString *mostRecentlyActivatedDashboardApp; // ivar: _mostRecentlyActivatedDashboardApp
@property (readonly, nonatomic) NSArray *navigatingIdentifiers;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)_initWithActiveNavigationIdentifiersObserver:(id)arg0 ;
-(id)init;
-(void)_updateMostRecentClusterApp;
-(void)_updateMostRecentDockApp;
-(void)activeNavigationIdentifiersObserver:(id)arg0 updatedActiveNavigationIdentifiers:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)appHistory:(id)arg0 mostRecentHomeScreenUpdatedTo:(id)arg1 ;
-(void)appHistory:(id)arg0 mostRecentNavigationAppUpdatedTo:(id)arg1 ;
-(void)appHistory:(id)arg0 mostRecentOtherAppUpdatedTo:(id)arg1 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif