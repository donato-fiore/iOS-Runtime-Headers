// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPUSHPAYLOAD_H
#define AMSPUSHPAYLOAD_H

@class ACAccount, NSString, NSNumber, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSPushPayload : NSObject {
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSInteger alertType;
@property (readonly, nonatomic) NSDictionary *aps;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSInteger priority;


+(id)actionTypeFromPayload:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif