// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESSAGEEXTENSIONRELAYSERVERMESSAGE_H
#define PKSHARINGMESSAGEEXTENSIONRELAYSERVERMESSAGE_H

@class PKProtobufRelaySharingMessage, NSString, NSURL;
@protocol PKSharingMessageExtensionMessage;


#import "PKSharingMessageExtensionCommonMessage.h"
#import "PKSharingMessageExtensionRelayServerLocalProperties.h"

@interface PKSharingMessageExtensionRelayServerMessage : PKSharingMessageExtensionCommonMessage <PKSharingMessageExtensionMessage>

 {
    PKProtobufRelaySharingMessage *_message;
    BOOL _useLegacyMessageFormat;
}


@property (retain, nonatomic) NSString *carKeyReaderIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (retain, nonatomic) PKSharingMessageExtensionRelayServerLocalProperties *localProperties;
@property (nonatomic) NSURL *overrideURL; // ivar: _overrideURL
@property (readonly, nonatomic) NSURL *phoneMailboxURL;
@property (retain, nonatomic) NSString *provisioningCredentialHash;
@property (nonatomic) NSUInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *watchMailboxURL;


-(id)_initWithCommonMessage:(id)arg0 url:(id)arg1 ;
-(id)_messageDataURLWithData:(id)arg0 ;
-(id)_messageDataWithDataURL:(id)arg0 ;
-(id)init;
-(id)urlRepresentation;
-(void)setMailboxURLS:(id)arg0 ;


@end


#endif