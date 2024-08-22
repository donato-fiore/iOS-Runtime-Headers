// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACREMOTEDEVICEMESSAGE_H
#define ACREMOTEDEVICEMESSAGE_H

@class NSMutableDictionary, NSData, ACAccount, NSString, NSError, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACRemoteDeviceMessage : NSObject {
    NSMutableDictionary *_payload;
    NSData *_data;
}


@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *command;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isReply; // ivar: _isReply
@property (nonatomic) BOOL needsReply; // ivar: _needsReply
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *result;
@property (readonly, nonatomic) NSString *sentMessageIdentifier;
@property (readonly, nonatomic) BOOL success;


+(id)_whitelistedClasses;
+(id)actionMessageWithCommand:(id)arg0 account:(id)arg1 options:(id)arg2 ;
+(id)replyForMessage:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
+(id)replyForMessage:(id)arg0 withSuccess:(BOOL)arg1 result:(id)arg2 error:(id)arg3 ;
-(id)_payloadObjectForKey:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)_invalidateCachedData;
-(void)_setPayloadObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif