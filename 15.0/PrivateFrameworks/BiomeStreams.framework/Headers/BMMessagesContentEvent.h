// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMMESSAGESCONTENTEVENT_H
#define BMMESSAGESCONTENTEVENT_H

@class NSURL, NSArray, NSString;
@protocol BMIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>

#import "BMContentAttachment.h"
#import "BMNamedHandle.h"

@interface BMMessagesContentEvent : NSObject <BMIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSArray *accountHandles; // ivar: _accountHandles
@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSString *accountType; // ivar: _accountType
@property (readonly, nonatomic) BMContentAttachment *attachment; // ivar: _attachment
@property (readonly, nonatomic) NSArray *bccHandles;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSArray *ccHandles;
@property (readonly, nonatomic) NSString *content; // ivar: _content
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly, nonatomic) BMNamedHandle *fromHandle; // ivar: _fromHandle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *suggestedNickname; // ivar: _suggestedNickname
@property (readonly, nonatomic) NSString *suggestedPhotoPath; // ivar: _suggestedPhotoPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *toHandles; // ivar: _toHandles
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 conversationId:(id)arg3 fromHandle:(id)arg4 toHandles:(id)arg5 suggestedNickname:(id)arg6 suggestedPhotoPath:(id)arg7 content:(id)arg8 accountIdentifier:(id)arg9 accountHandles:(id)arg10 accountType:(id)arg11 attachment:(id)arg12 URL:(id)arg13 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 conversationId:(id)arg3 fromHandle:(id)arg4 toHandles:(id)arg5 suggestedNickname:(id)arg6 suggestedPhotoPath:(id)arg7 content:(id)arg8 accountIdentifier:(id)arg9 accountHandles:(id)arg10 accountType:(id)arg11 attachment:(id)arg12 URL:(id)arg13 contentProtection:(id)arg14 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif