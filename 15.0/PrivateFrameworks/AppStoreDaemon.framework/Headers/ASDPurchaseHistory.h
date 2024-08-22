// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPURCHASEHISTORY_H
#define ASDPURCHASEHISTORY_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
    int _databaseChangedNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)executeQuery:(id)arg0 withResultHandler:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 forStoreItemID:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)showAllWithCompletionHandler:(id)arg0 ;
-(void)updateForAccountID:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateForAccountID:(NSInteger)arg0 withContext:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)updateWithCompletionHandler:(id)arg0 ;
-(void)updateWithContext:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif