// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DABABYSITTER_H
#define DABABYSITTER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DABabysitter : NSObject

@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSMutableDictionary *failedWaiters; // ivar: _failedWaiters
@property (retain, nonatomic) NSMutableDictionary *refreshingWaiters; // ivar: _refreshingWaiters
@property (retain, nonatomic) NSMutableDictionary *restrictedWaiters; // ivar: _restrictedWaiters


+(id)sharedBabysitter;
-(BOOL)accountShouldContinue:(id)arg0 ;
-(BOOL)accountWithIDShouldContinue:(id)arg0 ;
-(BOOL)registerAccount:(id)arg0 forOperationWithName:(id)arg1 ;
-(id)_init;
-(id)init;
-(void)_decrementRefreshCountForWaiter:(id)arg0 forOperationWithName:(id)arg1 ;
-(void)_decrementRefreshCountForWaiterID:(id)arg0 operationName:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg0 operationName:(id)arg1 ;
-(void)_reloadBabysitterProperties;
-(void)dealloc;
-(void)giveAccountWithIDAnotherChance:(id)arg0 ;
-(void)unregisterAccount:(id)arg0 forOperationWithName:(id)arg1 ;


@end


#endif