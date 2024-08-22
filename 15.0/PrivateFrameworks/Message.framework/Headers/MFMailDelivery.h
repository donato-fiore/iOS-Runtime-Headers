// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILDELIVERY_H
#define MFMAILDELIVERY_H

@class MFMutableMessageHeaders, NSArray, ECHTMLStringAndMIMECharset, NSDictionary, EMMessageObjectID;

#import <Foundation/Foundation.h>

#import "MFMailMessage.h"
#import "MailAccount.h"
#import "DeliveryAccount.h"
#import "MFDeliveryResult.h"
#import "MFPlainTextDocument.h"

@interface MFMailDelivery : NSObject {
    id *_delegate;
    MFMailMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    BOOL _threaded;
    BOOL _useCellDataOnly;
}


@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSDictionary *compositionSpecification; // ivar: _compositionSpecification
@property (nonatomic) NSUInteger conversationFlags; // ivar: _conversationFlags
@property (weak, nonatomic) id *delegate;
@property (nonatomic) BOOL isUserRequested; // ivar: _isUserRequested
@property (retain, nonatomic) MFMailMessage *originalMessage; // ivar: _originalMessage
@property (retain, nonatomic) EMMessageObjectID *originalMessageObjectID; // ivar: _originalMessageObjectID
@property (nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (nonatomic) BOOL shouldSign; // ivar: _shouldSign


+(BOOL)deliverMessage:(id)arg0 ;
+(id)newWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 ;
+(id)newWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
+(id)newWithMessage:(id)arg0 ;
-(NSInteger)deliveryStatus;
-(id)account;
-(id)archiveAccount;
-(id)deliverMessageData:(id)arg0 toRecipients:(id)arg1 ;
-(id)deliverSynchronously;
-(id)deliveryResult;
-(id)headersForDelivery;
-(id)init;
-(id)initWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 ;
-(id)initWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(id)newMessageWriter;
-(id)originalHeaders;
-(void)archive;
-(void)dealloc;
-(void)deliverAsynchronously;
-(void)setAccount:(id)arg0 ;
-(void)setArchiveAccount:(id)arg0 ;
-(void)setCellDataOnly:(BOOL)arg0 ;
-(void)updateOriginalMessageFromHeaders:(id)arg0 ;


@end


#endif