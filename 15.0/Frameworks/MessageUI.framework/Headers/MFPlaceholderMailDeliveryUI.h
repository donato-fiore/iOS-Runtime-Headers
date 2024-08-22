// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPLACEHOLDERMAILDELIVERYUI_H
#define MFPLACEHOLDERMAILDELIVERYUI_H

@class MFOutgoingMessageDelivery, NSString;
@protocol MFMessageRewriterPlaceholderResolver;


#import "MFPlaceholderMessageRewriter.h"

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver>

 {
    NSString *_contextID;
    MFPlaceholderMessageRewriter *_rewriter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_attachmentsContextID;
-(id)contentForContentID:(id)arg0 ;
-(id)contentForPlaceholder:(id)arg0 ;
-(id)contentForURL:(id)arg0 ;
-(id)deliverSynchronouslyWithCompletion:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;


@end


#endif