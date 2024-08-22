// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFMESSAGE_H
#define CARPFMESSAGE_H

@class NSDictionary, NSUUID, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;


#import "CARPFObject.h"
#import "CARPFActivity.h"
#import "CARPFMessageDestination.h"
#import "CARPFMessageInternal.h"
#import "CARPFLogEventSession.h"
#import "CARPFMessageTransport.h"

@interface CARPFMessage : CARPFObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) CARPFActivity *activity;
@property (retain, nonatomic) CARPFMessageDestination *destination;
@property (readonly, copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) CARPFMessageInternal *internal; // ivar: _internal
@property (readonly, nonatomic) CARPFLogEventSession *logEventSession;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger qualityOfService;
@property (copy, nonatomic) id *responseHandler;
@property (readonly, nonatomic) CGFloat timeout;
@property (readonly, weak, nonatomic) CARPFMessageTransport *transport;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
+(id)activityNameWithMessageName:(id)arg0 ;
+(id)carpf_shortDescription;
+(id)messageWithMessage:(id)arg0 messagePayload:(id)arg1 ;
+(id)messageWithMessage:(id)arg0 messagePayload:(id)arg1 responseHandler:(id)arg2 ;
+(id)messageWithName:(id)arg0 destination:(id)arg1 payload:(id)arg2 ;
+(id)messageWithName:(id)arg0 identifier:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg0 messagePayload:(id)arg1 ;
+(id)messageWithName:(id)arg0 messagePayload:(id)arg1 responseHandler:(id)arg2 ;
+(id)messageWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 ;
+(id)supportedClasses;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 keyPresent:(*BOOL)arg1 ;
-(BOOL)respondWithError:(id)arg0 ;
-(BOOL)respondWithPayload:(id)arg0 ;
-(BOOL)respondWithPayload:(id)arg0 error:(id)arg1 ;
-(BOOL)respondWithSuccess;
-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)arrayOfDateComponentsForKey:(id)arg0 ;
-(id)calendarForKey:(id)arg0 ;
-(id)carpf_shortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dateComponentsForKey:(id)arg0 ;
-(id)dateForKey:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)errorForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalMessage:(id)arg0 ;
-(id)initWithName:(id)arg0 destination:(id)arg1 payload:(id)arg2 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 messagePayload:(id)arg2 responseHandler:(id)arg3 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 userInfo:(id)arg3 headers:(id)arg4 payload:(id)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)nullForKey:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)predicateForKey:(id)arg0 ;
-(id)setForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)timeZoneForKey:(id)arg0 ;
-(id)unarchivedObjectForKey:(id)arg0 ofClasses:(id)arg1 ;
-(id)uuidForKey:(id)arg0 ;
-(void)__initWithInternalMessage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif