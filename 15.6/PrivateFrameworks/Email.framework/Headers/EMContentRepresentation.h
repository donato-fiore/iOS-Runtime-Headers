// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMCONTENTREPRESENTATION_H
#define EMCONTENTREPRESENTATION_H

@class EFInvocationToken, NSURL, NSString, NSArray, CSSearchableItem, EFSandboxedURLWrapper;
@protocol NSSecureCoding, EFPubliclyDescribable, EMContentItem, _EMDistantContentRepresentation;

#import <Foundation/Foundation.h>

#import "EMMessage.h"
#import "EMMessageHeaders.h"
#import "EMSecurityInformation.h"
#import "EMListUnsubscribeCommand.h"

@interface EMContentRepresentation : NSObject <NSSecureCoding, EFPubliclyDescribable>

 {
    EFInvocationToken *_invocable;
    BOOL _claimedScopedResource;
}


@property (weak, nonatomic) NSObject<EMContentItem> *contentItem; // ivar: _contentItem
@property (retain, nonatomic) EMMessage *contentMessage; // ivar: _contentMessage
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<_EMDistantContentRepresentation> *distantContentRepresentation; // ivar: _distantContentRepresentation
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) BOOL hasMoreContent; // ivar: _hasMoreContent
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *listUnsubscribeBlock; // ivar: _listUnsubscribeBlock
@property (retain, nonatomic) NSURL *publicMessageURL; // ivar: _publicMessageURL
@property (copy, nonatomic) NSArray *relatedContentItems; // ivar: _relatedContentItems
@property (nonatomic) NSInteger remainingByteCount; // ivar: _remainingByteCount
@property (copy, nonatomic) NSArray *replyToList; // ivar: _replyToList
@property (copy, nonatomic) id *requestMoreContentBlock; // ivar: _requestMoreContentBlock
@property (retain, nonatomic) EMMessageHeaders *requestedHeaders; // ivar: _requestedHeaders
@property (retain, nonatomic) CSSearchableItem *searchableItem; // ivar: _searchableItem
@property (retain, nonatomic) EMSecurityInformation *securityInformation; // ivar: _securityInformation
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transportType; // ivar: _transportType
@property (retain, nonatomic) EMListUnsubscribeCommand *unsubscribeCommand; // ivar: _unsubscribeCommand
@property (retain, nonatomic) EFSandboxedURLWrapper *urlWrapper; // ivar: _urlWrapper


+(BOOL)supportsSecureCoding;
+(id)contentRequestDelegateInterface;
+(id)temporaryURLWithData:(id)arg0 clientIdentifier:(id)arg1 preferredFilename:(id)arg2 pathExtension:(id)arg3 cleanupInvocable:(*id)arg4 error:(*id)arg5 ;
-(id)_distantLoaderBlockForContentItem:(SEL)arg0 ;
-(id)_initWithRelatedItems:(id)arg0 securityInformation:(id)arg1 ;
-(id)_initWithSandboxedURLWrapper:(id)arg0 relatedItems:(id)arg1 securityInformation:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentMessage:(id)arg0 data:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 extension:(id)arg4 ;
-(id)initWithContentURL:(id)arg0 relatedItems:(id)arg1 securityInformation:(id)arg2 ;
-(id)initWithData:(id)arg0 clientIdentifier:(id)arg1 extension:(id)arg2 relatedItems:(id)arg3 securityInformation:(id)arg4 ;
-(id)initWithData:(id)arg0 clientIdentifier:(id)arg1 preferredFilename:(id)arg2 extension:(id)arg3 relatedItems:(id)arg4 securityInformation:(id)arg5 ;
-(id)performUnsubscribeAction:(NSUInteger)arg0 completion:(id)arg1 ;
-(id)requestAdditionalContentWithCompletion:(id)arg0 ;
-(void)addInvalidationHandler:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)mergeUpdatedRepresentation:(id)arg0 ;


@end


#endif