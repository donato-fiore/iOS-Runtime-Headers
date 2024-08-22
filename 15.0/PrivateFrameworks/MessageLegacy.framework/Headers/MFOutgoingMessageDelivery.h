// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFOUTGOINGMESSAGEDELIVERY_H
#define MFOUTGOINGMESSAGEDELIVERY_H

@class MFMessage, MFMutableMessageHeaders, NSArray, NSString, NSDictionary;
@protocol MFDeliveryDelegate;

#import <Foundation/Foundation.h>

#import "MFPlainTextDocument.h"
#import "MailAccount.h"
#import "DeliveryAccount.h"
#import "MFMailDelivery.h"
#import "MFAttachmentCompositionContext.h"

@interface MFOutgoingMessageDelivery : NSObject {
    MFMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    NSArray *_charsets;
    id<MFDeliveryDelegate> *_delegate;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    MFMailDelivery *_currentDeliveryObject;
}


@property (retain, nonatomic) MFAttachmentCompositionContext *attachmentContext; // ivar: _attachmentContext
@property (retain, nonatomic) NSDictionary *compositionSpecification; // ivar: _compositionSpecification
@property (nonatomic) NSUInteger conversationFlags; // ivar: _conversationFlags
@property (nonatomic) BOOL isUserRequested; // ivar: _isUserRequested
@property (nonatomic) NSInteger originalConversationId; // ivar: _originalConversationId


+(id)newWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 charsets:(id)arg4 ;
+(id)newWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
+(id)newWithMessage:(id)arg0 ;
-(NSInteger)deliveryStatus;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg0 ;
-(id)_deliveryAccountForInitializers;
-(id)account;
-(id)deliverSynchronouslyWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 charsets:(id)arg4 ;
-(id)initWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(id)originalHeaders;
-(void)dealloc;
-(void)setAccount:(id)arg0 ;
-(void)setArchiveAccount:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif