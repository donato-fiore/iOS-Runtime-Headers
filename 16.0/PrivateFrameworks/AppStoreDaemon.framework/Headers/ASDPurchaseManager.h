// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDPURCHASEMANAGER_H
#define ASDPURCHASEMANAGER_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDPurchaseManager : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedManager;
-(id)adopt:(id)arg0 ;
-(id)adoptableBundleIdentifiers;
-(id)init;
-(void)adoptionStatus:(BOOL)arg0 withReplyHandler:(id)arg1 ;
-(void)checkAutomaticDownloadQueue;
-(void)checkPendingQueue;
-(void)checkPreflightForItemIdentifier:(id)arg0 atURL:(id)arg1 withReplyHandler:(id)arg2 ;
-(void)processPurchase:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)renewReceiptForApplicationAtURL:(id)arg0 withAppleID:(id)arg1 password:(id)arg2 forceSandbox:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
-(void)startPurchase:(id)arg0 withResultHandler:(id)arg1 ;
-(void)unadoptWithReplyHandler:(id)arg0 ;


@end


#endif