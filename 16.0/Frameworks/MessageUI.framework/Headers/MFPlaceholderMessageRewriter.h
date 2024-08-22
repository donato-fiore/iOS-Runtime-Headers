// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPLACEHOLDERMESSAGEREWRITER_H
#define MFPLACEHOLDERMESSAGEREWRITER_H

@class NSMutableArray, MFOutgoingMessageContent, NSString;
@protocol MFComposeTypeFactoryDelegate, MFMessageRewriterPlaceholderResolver;

#import <Foundation/Foundation.h>


@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate>

 {
    NSMutableArray *_placeholders;
    MFOutgoingMessageContent *_rewrittenMessageContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFOutgoingMessageContent *originalMessageContent; // ivar: _originalMessageContent
@property (weak, nonatomic) NSObject<MFMessageRewriterPlaceholderResolver> *placeholderResolver; // ivar: _placeholderResolver
@property (readonly) Class superclass;


+(id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg0 ;
-(id)accountProxyGenerator;
-(id)attachments;
-(id)bccRecipients;
-(id)ccRecipients;
-(id)composeWebView;
-(id)init;
-(id)initWithOriginalMessageContent:(id)arg0 resolver:(id)arg1 ;
-(id)rewrittenMessageContent;
-(id)savedHeaders;
-(id)sendingAccountProxy;
-(id)sendingEmailAddress;
-(id)shouldCreateRichTextRepresentation;
-(id)subject;
-(id)toRecipients;
-(void)setBccRecipients:(id)arg0 ;
-(void)setCcRecipients:(id)arg0 ;
-(void)setSavedHeaders:(id)arg0 ;
-(void)setSendingEmailAddress:(id)arg0 ;
-(void)setSubject:(id)arg0 ;
-(void)setToRecipients:(id)arg0 ;


@end


#endif