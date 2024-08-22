// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMXPCTRANSACTIONMANAGER_H
#define FMXPCTRANSACTIONMANAGER_H

@class NSCountedSet, NSString;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMXPCTransactionManager : NSObject

@property (retain, nonatomic) NSCountedSet *activeTransactions; // ivar: _activeTransactions
@property (retain, nonatomic) NSString *keepAliveActivityIdentifier; // ivar: _keepAliveActivityIdentifier
@property (retain, nonatomic) NSObject<OS_os_transaction> *masterTransaction; // ivar: _masterTransaction
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *txn_ops_queue; // ivar: _txn_ops_queue


+(id)sharedInstance;
-(id)dumpActiveTransactions;
-(id)init;
-(id)initSingleton;
-(void)_disableKeepAlive;
-(void)_disableLaunchOnRebootActivity:(id)arg0 ;
-(void)_disableOldKeepAliveActivity;
-(void)_enableKeepAlive;
-(void)beginTransaction:(id)arg0 ;
-(void)dealloc;
-(void)endTransaction:(id)arg0 ;
-(void)setLaunchOnRebootActivity:(id)arg0 keepAliveActivity:(id)arg1 ;


@end


#endif