// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEWRITER_H
#define MFMESSAGEWRITER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MFMessageWriter : NSObject {
    Class _messageClassToInstantiate;
    BOOL _allows8BitMimeParts;
    BOOL _allowsBinaryMimeParts;
    BOOL _writeSizeDispositionParameter;
    BOOL _allowsQuotedPrintable;
}


@property (readonly, nonatomic) NSDictionary *compositionSpecification; // ivar: _compositionSpecification
@property (nonatomic) id *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldWriteAttachmentPlaceholders; // ivar: _shouldWriteAttachmentPlaceholders


-(BOOL)allows8BitMimeParts;
-(BOOL)allowsBinaryMimeParts;
-(BOOL)allowsQuotedPrintable;
-(id)createMessageWithHtmlString:(id)arg0 attachments:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithHtmlString:(id)arg0 plainTextAlternative:(id)arg1 otherHtmlStringsAndAttachments:(id)arg2 charsets:(id)arg3 headers:(id)arg4 ;
-(id)createMessageWithHtmlString:(id)arg0 plainTextAlternative:(id)arg1 otherHtmlStringsAndAttachments:(id)arg2 headers:(id)arg3 ;
-(id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg0 headers:(id)arg1 ;
-(id)createMessageWithString:(id)arg0 headers:(id)arg1 ;
-(id)init;
-(id)initWithCompositionSpecification:(id)arg0 ;
-(void)appendDataForMimePart:(id)arg0 toData:(id)arg1 withPartData:(id)arg2 ;
-(void)dealloc;
-(void)setAllows8BitMimeParts:(BOOL)arg0 ;
-(void)setAllowsBinaryMimeParts:(BOOL)arg0 ;
-(void)setAllowsQuotedPrintable:(BOOL)arg0 ;
-(void)setMessageClassToInstantiate:(Class)arg0 ;
-(void)setWriteSizeDispositionParameter:(BOOL)arg0 ;


@end


#endif