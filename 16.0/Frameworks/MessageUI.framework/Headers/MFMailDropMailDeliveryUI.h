// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILDROPMAILDELIVERYUI_H
#define MFMAILDROPMAILDELIVERYUI_H

@class MFMailDropMailDelivery, NSString;
@protocol MFMessageRewriterPlaceholderResolver;


#import "MFPlaceholderMessageRewriter.h"

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver>

 {
    MFPlaceholderMessageRewriter *_rewriter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updateMessageWithAttachmentsSynchronously;
-(id)_contentForAttachmentPassingTest:(id)arg0 ;
-(id)_headersByAddingMailDropHeaders:(id)arg0 ;
-(id)_mailDropAttachmentHTMLStringForAttachment:(id)arg0 ;
-(id)_mailDropBannerHTMLString;
-(id)_scaleImages:(id)arg0 toFit:(NSUInteger)arg1 resultingSize:(*NSUInteger)arg2 ;
-(id)contentForContentID:(id)arg0 ;
-(id)contentForPlaceholder:(id)arg0 ;
-(id)contentForURL:(id)arg0 ;
-(id)deliverSynchronouslyWithCompletion:(id)arg0 ;
-(id)scaledImages:(id)arg0 ;


@end


#endif