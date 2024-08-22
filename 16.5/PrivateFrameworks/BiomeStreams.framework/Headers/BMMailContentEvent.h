// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMAILCONTENTEVENT_H
#define BMMAILCONTENTEVENT_H

@class NSData, NSArray, NSString, NSDictionary;
@protocol BMIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>

#import "BMPBMailContentEvent.h"
#import "BMNamedHandle.h"

@interface BMMailContentEvent : NSObject <BMIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

 {
    NSData *_data;
    BMPBMailContentEvent *_proto;
    os_unfair_lock_s _protoLock;
}


@property (readonly, nonatomic) CGFloat absoluteTimestamp;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSArray *bccHandles; // ivar: _bccHandles
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSArray *ccHandles; // ivar: _ccHandles
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly, nonatomic) BMNamedHandle *fromHandle; // ivar: _fromHandle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *headers; // ivar: _headers
@property (readonly, nonatomic) NSData *htmlContent;
@property (readonly, nonatomic) BOOL isFullyDownloaded;
@property (readonly, nonatomic) BMNamedHandle *listId; // ivar: _listId
@property (readonly, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) BMNamedHandle *replyTo; // ivar: _replyTo
@property (readonly, nonatomic) NSString *securityMethod;
@property (readonly, nonatomic) NSString *subject;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) NSArray *toHandles; // ivar: _toHandles
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)_initWithUniqueId:(id)arg0 domainId:(id)arg1 ;
-(id)encodeAsProto;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 accountIdentifier:(id)arg3 messageIdentifier:(id)arg4 fromHandle:(id)arg5 toHandles:(id)arg6 ccHandles:(id)arg7 bccHandles:(id)arg8 headers:(id)arg9 subject:(id)arg10 htmlContent:(id)arg11 textContent:(id)arg12 isFullyDownloaded:(BOOL)arg13 securityMethod:(id)arg14 accountHandles:(id)arg15 replyTo:(id)arg16 mailboxIdentifiers:(id)arg17 listId:(id)arg18 accountType:(id)arg19 attachments:(id)arg20 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 accountIdentifier:(id)arg3 messageIdentifier:(id)arg4 fromHandle:(id)arg5 toHandles:(id)arg6 ccHandles:(id)arg7 bccHandles:(id)arg8 headers:(id)arg9 subject:(id)arg10 htmlContent:(id)arg11 textContent:(id)arg12 isFullyDownloaded:(BOOL)arg13 securityMethod:(id)arg14 accountHandles:(id)arg15 replyTo:(id)arg16 mailboxIdentifiers:(id)arg17 listId:(id)arg18 accountType:(id)arg19 attachments:(id)arg20 contentProtection:(id)arg21 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)_inflateFromProto:(id)arg0 ;
-(void)_loadData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif