// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVSERVICEHUBMESSAGE_H
#define UVSERVICEHUBMESSAGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UVServiceHubMessage : NSObject

@property (readonly, nonatomic) NSString *messageType; // ivar: _messageType
@property (readonly, nonatomic) NSObject<NSSecureCoding> *payload; // ivar: _payload
@property (readonly, nonatomic) id *replyHandler; // ivar: _replyHandler


-(id)initWithMessageType:(id)arg0 payload:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif