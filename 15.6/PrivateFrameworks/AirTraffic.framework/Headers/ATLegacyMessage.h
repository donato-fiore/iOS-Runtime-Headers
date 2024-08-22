// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATLEGACYMESSAGE_H
#define ATLEGACYMESSAGE_H

@class NSString, NSDictionary, NSData, NSError;

#import <Foundation/Foundation.h>


@interface ATLegacyMessage : NSObject

@property (retain, nonatomic) NSString *dataClass; // ivar: _dataClass
@property (nonatomic) unsigned int messageId; // ivar: _messageId
@property (nonatomic) NSUInteger messageType; // ivar: _messageType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _params
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (retain, nonatomic) NSError *result; // ivar: _result
@property (nonatomic) unsigned int sessionNumber; // ivar: _session
@property (retain, nonatomic) NSData *sig; // ivar: _sig
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)_messageTypeString:(NSUInteger)arg0 ;
+(id)messageFromData:(id)arg0 ;
+(id)messageFromDictionary:(id)arg0 ;
+(id)messageFromHeader:(id)arg0 withParams:(id)arg1 andPayload:(id)arg2 ;
+(id)messageWithName:(id)arg0 parameters:(id)arg1 ;
+(id)messageWithName:(id)arg0 parameters:(id)arg1 session:(unsigned int)arg2 ;
+(unsigned int)currentSessionNumber;
+(unsigned int)nextSessionNumber;
-(id)data;
-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)parameterForKey:(id)arg0 ;
-(id)partialResponseWithParameters:(id)arg0 ;
-(id)responseWithResultError:(id)arg0 parameters:(id)arg1 ;


@end


#endif