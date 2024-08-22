// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCHANGETRACKING_H
#define REMCHANGETRACKING_H

@class NSArray, NSSet;
@protocol REMChangeTrackingClientIdentifying, REMDaemonController;

#import <Foundation/Foundation.h>


@interface REMChangeTracking : NSObject

@property (readonly, nonatomic) NSObject<REMChangeTrackingClientIdentifying> *changeTrackingClientID; // ivar: _changeTrackingClientID
@property (readonly, nonatomic) NSObject<REMDaemonController> *daemonController; // ivar: _daemonController
@property (retain, nonatomic) NSArray *entityNames; // ivar: _entityNames
@property (readonly, nonatomic) NSSet *transactionAuthorKeysToExclude; // ivar: _transactionAuthorKeysToExclude
@property (nonatomic) NSUInteger transactionFetchLimit; // ivar: _transactionFetchLimit


+(id)defaultTransactionAuthorKeysToExclude;
+(id)entityNamesToIncludeFromTrackingWithOptionProvider:(Class)arg0 ;
+(id)internalTransactionAuthorKeysToExclude;
-(id)currentChangeTokenForAccountTypes:(NSInteger)arg0 error:(*id)arg1 ;
-(id)currentChangeTokenForAllAccountsWithError:(*id)arg0 ;
-(id)currentChangeTokenWithError:(*id)arg0 ;
-(id)earliestChangeTokenWithError:(*id)arg0 ;
-(id)fetchAuxiliaryChangeInfosOfType:(Class)arg0 withChangeObject:(id)arg1 error:(*id)arg2 ;
-(id)fetchHistoryAfterDate:(id)arg0 error:(*id)arg1 ;
-(id)fetchHistoryAfterToken:(id)arg0 error:(*id)arg1 ;
-(id)getTrackingStateWithError:(*id)arg0 ;
-(id)initWithClientID:(id)arg0 daemonController:(id)arg1 ;
-(id)initWithClientID:(id)arg0 daemonController:(id)arg1 transactionAuthorKeysToExclude:(id)arg2 ;
-(id)persistenceStoreIDForAccountID:(id)arg0 error:(*id)arg1 ;
// -(void)_performChangeTrackingWithReason:(id)arg0 block:(id)arg1 xpcErrorHandler:(unk)arg2  ;
-(void)deleteHistoryBeforeDate:(id)arg0 error:(*id)arg1 ;
-(void)deleteHistoryBeforeToken:(id)arg0 error:(*id)arg1 ;
-(void)saveTrackingState:(id)arg0 error:(*id)arg1 ;


@end


#endif