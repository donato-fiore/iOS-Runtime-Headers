// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSETYPEFACTORY_H
#define MFCOMPOSETYPEFACTORY_H


#import <Foundation/Foundation.h>


@interface MFComposeTypeFactory : NSObject



+(BOOL)alwaysBCCSelf;
+(NSUInteger)imageScaleFromUserDefaults;
+(id)_markupForInlineAttachment:(id)arg0 willBeIncluded:(BOOL)arg1 prependBlankLine:(BOOL)arg2 delegate:(id)arg3 ;
+(id)_markupStringForExcludedInlineAttachmentWithFilename:(id)arg0 ;
+(id)bccSelfAddressForDelegate:(id)arg0 ;
+(id)headersFromDelegate:(id)arg0 ;
+(id)headersFromDelegate:(id)arg0 originatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
+(id)messageFromDelegate:(id)arg0 originatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
+(id)messageFromDelegate:(id)arg0 withSubstituteDOMDocument:(id)arg1 compositionSpecification:(id)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 writeAttachmentPlaceholders:(BOOL)arg5 ;
+(id)subjectFromSubject:(id)arg0 withComposeType:(NSInteger)arg1 ;
+(void)_mergeModel:(id)arg0 withDelegate:(id)arg1 ;
+(void)_prependQuotedMarkup:(id)arg0 shouldIndent:(BOOL)arg1 toBodyField:(id)arg2 ;
+(void)_quoteFromModel:(id)arg0 delegate:(id)arg1 ;
+(void)_sanitizeRecipientsForComposeType:(NSUInteger)arg0 sendingAddress:(id)arg1 delegate:(id)arg2 ;
+(void)_setContent:(id)arg0 includeAttachments:(BOOL)arg1 shouldQuote:(BOOL)arg2 prependBlankLine:(BOOL)arg3 delegate:(id)arg4 ;
+(void)_setContent:(id)arg0 includeAttachments:(BOOL)arg1 shouldQuote:(BOOL)arg2 prependBlankLine:(BOOL)arg3 delegate:(id)arg4 storeOriginalAttachments:(BOOL)arg5 ;
+(void)_setupForForwardWithModel:(id)arg0 delegate:(id)arg1 ;
+(void)_setupForNewMessageWithModel:(id)arg0 delegate:(id)arg1 ;
+(void)_setupForReplyAllWithModel:(id)arg0 delegate:(id)arg1 ;
+(void)_setupForReplyWithModel:(id)arg0 delegate:(id)arg1 ;
+(void)_updateDelegate:(id)arg0 toRecipients:(id)arg1 ccRecipients:(id)arg2 bccRecipients:(id)arg3 ;
+(void)addAttachment:(id)arg0 prepend:(BOOL)arg1 withCompositionModel:(id)arg2 delegate:(id)arg3 ;
+(void)hijackThreadFromDelegate:(id)arg0 ;
+(void)setupSwitchToReplyAllWithModel:(id)arg0 delegate:(id)arg1 ;
+(void)setupSwitchToReplyWithModel:(id)arg0 delegate:(id)arg1 ;
+(void)setupWithCompositionModel:(id)arg0 delegate:(id)arg1 ;
+(void)setupWithContent:(id)arg0 delegate:(id)arg1 ;


@end


#endif