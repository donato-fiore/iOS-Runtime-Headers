// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEMESSAGE_H
#define HMDREMOTEMESSAGE_H

@class HMFMessage, NSString, NSData, NSUUID;


#import "HMDRemoteMessageSenderContext.h"
#import "HMDHomeKitVersion.h"

@interface HMDRemoteMessage : HMFMessage

@property (copy, nonatomic) NSString *attributedMessageName;
@property (readonly, nonatomic) NSString *collapseID;
@property (retain, nonatomic) NSData *logEventSessionData; // ivar: _logEventSessionData
@property (nonatomic) NSUInteger responseRestriction;
@property (nonatomic) NSUInteger restriction;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) NSUInteger sendOptions; // ivar: _sendOptions
@property (retain, nonatomic) HMDRemoteMessageSenderContext *senderContext;
@property (retain, nonatomic) HMDHomeKitVersion *sourceVersion; // ivar: _sourceVersion
@property (copy, nonatomic) NSUUID *transactionIdentifier; // ivar: _transactionIdentifier
@property (nonatomic) NSInteger type; // ivar: _type


+(id)messageWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 messagePayload:(id)arg3 restriction:(NSUInteger)arg4 ;
+(id)secureMessageWithName:(id)arg0 destination:(id)arg1 messagePayload:(id)arg2 ;
+(id)secureMessageWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 messagePayload:(id)arg3 ;
+(id)secureMessageWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 messagePayload:(id)arg3 restriction:(NSUInteger)arg4 ;
-(BOOL)isRemote;
-(id)createActivityForLogSession;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithName:(id)arg0 destination:(id)arg1 payload:(id)arg2 ;
-(id)initWithName:(id)arg0 destination:(id)arg1 payload:(id)arg2 headers:(id)arg3 type:(NSInteger)arg4 timeout:(CGFloat)arg5 secure:(BOOL)arg6 ;
-(id)initWithName:(id)arg0 destination:(id)arg1 payload:(id)arg2 type:(NSInteger)arg3 timeout:(CGFloat)arg4 secure:(BOOL)arg5 ;
-(id)initWithName:(id)arg0 destination:(id)arg1 payload:(id)arg2 type:(NSInteger)arg3 timeout:(CGFloat)arg4 secure:(BOOL)arg5 restriction:(NSUInteger)arg6 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 headers:(id)arg4 type:(NSInteger)arg5 timeout:(CGFloat)arg6 secure:(BOOL)arg7 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 headers:(id)arg4 type:(NSInteger)arg5 timeout:(CGFloat)arg6 secure:(BOOL)arg7 restriction:(NSUInteger)arg8 sendOptions:(NSUInteger)arg9 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 headers:(id)arg4 type:(NSInteger)arg5 timeout:(CGFloat)arg6 secure:(BOOL)arg7 restriction:(NSUInteger)arg8 sendOptions:(NSUInteger)arg9 collapseID:(id)arg10 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 type:(NSInteger)arg4 timeout:(CGFloat)arg5 secure:(BOOL)arg6 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 type:(NSInteger)arg4 timeout:(CGFloat)arg5 secure:(BOOL)arg6 restriction:(NSUInteger)arg7 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 type:(NSInteger)arg4 timeout:(CGFloat)arg5 secure:(BOOL)arg6 restriction:(NSUInteger)arg7 sendOptions:(NSUInteger)arg8 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 payload:(id)arg3 type:(NSInteger)arg4 timeout:(CGFloat)arg5 secure:(BOOL)arg6 restriction:(NSUInteger)arg7 sendOptions:(NSUInteger)arg8 collapseID:(id)arg9 ;
-(id)initWithName:(id)arg0 qualityOfService:(NSInteger)arg1 destination:(id)arg2 userInfo:(id)arg3 headers:(id)arg4 payload:(id)arg5 ;
-(void)setInternalResponseHandler:(id)arg0 ;
-(void)setResponseHandler:(id)arg0 ;


@end


#endif