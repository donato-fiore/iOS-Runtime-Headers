// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INMESSAGE_H
#define INMESSAGE_H

@class NSString, NSDate, NSNumber, NSArray;
@protocol INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INMessageExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"
#import "INSpeakableString.h"
#import "INMessageLinkMetadata.h"
#import "INCurrencyAmount.h"
#import "INMessage.h"
#import "INPerson.h"

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INMessageExport, NSCopying, NSSecureCoding>



@property (readonly) INImage *_keyImage;
@property (readonly, copy, nonatomic) NSString *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy, nonatomic) NSDate *dateMessageWasLastRead; // ivar: _dateMessageWasLastRead
@property (readonly, copy, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (readonly, copy, nonatomic) INSpeakableString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) INMessageLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (copy, nonatomic) NSString *locationName; // ivar: _locationName
@property (readonly, nonatomic) NSInteger messageEffectType; // ivar: _messageEffectType
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, copy, nonatomic) NSNumber *numberOfAttachments; // ivar: _numberOfAttachments
@property (copy, nonatomic) INCurrencyAmount *paymentAmount; // ivar: _paymentAmount
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, copy, nonatomic) INMessage *referencedMessage; // ivar: _referencedMessage
@property (copy, nonatomic) INPerson *sender; // ivar: _sender
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 content:(id)arg1 dateSent:(id)arg2 sender:(id)arg3 recipients:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 dateMessageWasLastRead:(id)arg6 numberOfAttachments:(id)arg7 messageType:(NSInteger)arg8 messageEffectType:(NSInteger)arg9 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 groupName:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(NSInteger)arg9 messageEffectType:(NSInteger)arg10 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 groupName:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(NSInteger)arg9 messageEffectType:(NSInteger)arg10 referencedMessage:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 groupName:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(NSInteger)arg9 messageEffectType:(NSInteger)arg10 referencedMessage:(id)arg11 serviceName:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 groupName:(id)arg6 messageType:(NSInteger)arg7 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 groupName:(id)arg6 messageType:(NSInteger)arg7 serviceName:(id)arg8 ;
-(id)initWithIdentifier:(id)arg0 conversationIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 messageType:(NSInteger)arg6 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif