// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASOCTANESERVER_H
#define ASOCTANESERVER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ASOctaneServer : NSObject {
    NSXPCConnection *_connectionToService;
}




+(id)shared;
-(NSInteger)activePort;
-(NSInteger)getIntegerValueForIdentifier:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(id)_synchronousRemoteObjectProxy:(*id)arg0 ;
-(id)buyProductWithID:(id)arg0 bundleID:(id)arg1 ;
-(id)cancelTransactionWithIdentifier:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(id)changeAutoRenewStatus:(BOOL)arg0 transactionID:(NSUInteger)arg1 bundleID:(id)arg2 ;
-(id)clearOverridesForBundleID:(id)arg0 ;
-(id)completeAskToBuyRequestWithResponse:(BOOL)arg0 transactionID:(NSUInteger)arg1 forBundleID:(id)arg2 ;
-(id)deleteAllTransactionsForBundleID:(id)arg0 ;
-(id)deleteTransactionWithIdentifier:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(id)expireOrRenewSubscriptionWithIdentifier:(id)arg0 expire:(BOOL)arg1 forBundleID:(id)arg2 ;
-(id)getStorefrontForBundleID:(id)arg0 ;
-(id)getStringValueForIdentifier:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(id)getTransactionDataForBundleID:(id)arg0 ;
-(id)init;
-(id)refundTransactionWithIdentifier:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(id)registerForEventOfType:(NSInteger)arg0 withFilterData:(id)arg1 ;
-(id)resolveIssueForTransactionWithIdentifier:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(id)setIntegerValue:(NSInteger)arg0 forIdentifier:(NSUInteger)arg1 forBundleID:(id)arg2 ;
-(id)setStorefront:(id)arg0 forBundleID:(id)arg1 ;
-(id)setStringValue:(id)arg0 forIdentifier:(NSUInteger)arg1 forBundleID:(id)arg2 ;
-(void)appRemovedWithBundleID:(id)arg0 ;
-(void)unregisterForEventWithIdentifier:(id)arg0 ;
-(void)useConfigurationDirectory:(id)arg0 forBundleID:(id)arg1 ;


@end


#endif