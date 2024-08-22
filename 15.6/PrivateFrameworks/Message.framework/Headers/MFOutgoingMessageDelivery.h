// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFOUTGOINGMESSAGEDELIVERY_H
#define MFOUTGOINGMESSAGEDELIVERY_H

@class MFMutableMessageHeaders, NSArray, ECHTMLStringAndMIMECharset, NSDictionary;
@protocol MFDeliveryDelegate;

#import <Foundation/Foundation.h>

#import "MFMailMessage.h"
#import "MFPlainTextDocument.h"
#import "MailAccount.h"
#import "DeliveryAccount.h"
#import "MFMailDelivery.h"
#import "MFAttachmentCompositionContext.h"

@interface MFOutgoingMessageDelivery : NSObject {
    MFMailMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    MFMailDelivery *_currentDeliveryObject;
}


@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) MFAttachmentCompositionContext *attachmentContext; // ivar: _attachmentContext
@property (retain, nonatomic) NSDictionary *compositionSpecification; // ivar: _compositionSpecification
@property (nonatomic) NSUInteger conversationFlags; // ivar: _conversationFlags
@property (weak, nonatomic) NSObject<MFDeliveryDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isUserRequested; // ivar: _isUserRequested
@property (nonatomic) NSInteger originalConversationId; // ivar: _originalConversationId
@property (retain, nonatomic) MFMailMessage *originalMessage; // ivar: _originalMessage
@property (nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (nonatomic) BOOL shouldSign; // ivar: _shouldSign


+(id)newWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 ;
+(id)newWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
+(id)newWithMessage:(id)arg0 ;
-(NSInteger)deliveryStatus;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg0 ;
-(id)_deliveryAccountForInitializers;
-(id)account;
-(id)deliverSynchronouslyWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 ;
-(id)initWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(id)originalHeaders;
-(void)setAccount:(id)arg0 ;
-(void)setArchiveAccount:(id)arg0 ;


@end


#endif