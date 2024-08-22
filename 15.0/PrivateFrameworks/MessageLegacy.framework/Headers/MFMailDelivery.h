// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILDELIVERY_H
#define MFMAILDELIVERY_H

@class MFMessage, MFMutableMessageHeaders, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "DeliveryAccount.h"
#import "MFDeliveryResult.h"
#import "MFPlainTextDocument.h"

@interface MFMailDelivery : NSObject {
    id *_delegate;
    MFMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    NSArray *_charsets;
    BOOL _threaded;
    BOOL _useCellDataOnly;
}


@property (retain, nonatomic) NSDictionary *compositionSpecification; // ivar: _compositionSpecification
@property (nonatomic) NSUInteger conversationFlags; // ivar: _conversationFlags
@property (nonatomic) BOOL isUserRequested; // ivar: _isUserRequested


+(BOOL)deliverMessage:(id)arg0 ;
+(id)newWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 charsets:(id)arg4 ;
+(id)newWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
+(id)newWithMessage:(id)arg0 ;
-(BOOL)shouldEncryptMessage;
-(BOOL)shouldSignMessage;
-(NSInteger)deliveryStatus;
-(id)account;
-(id)archiveAccount;
-(id)delegate;
-(id)deliverMessageData:(id)arg0 toRecipients:(id)arg1 ;
-(id)deliverSynchronously;
-(id)deliveryResult;
-(id)headersForDelivery;
-(id)init;
-(id)initWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 charsets:(id)arg4 ;
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
-(void)setDelegate:(id)arg0 ;


@end


#endif