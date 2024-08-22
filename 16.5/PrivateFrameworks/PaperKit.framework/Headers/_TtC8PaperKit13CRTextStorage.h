// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT13CRTEXTSTORAGE_H
#define _TTC8PAPERKIT13CRTEXTSTORAGE_H



#import "CRTextStorageBase.h"

@interface _TtC8PaperKit13CRTextStorage : CRTextStorageBase {
    ? viewAttributedString;
    ? mergeableString;
    ? darkMode;
    ? isFixingAttributes;
}




-(id)init;
-(id)initWithAttachment:(id)arg0 attributes:(id)arg1 ;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfMarkdownFileAtURL:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)initWithFileURL:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)initWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithMarkdown:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithMarkdownString:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)mutableAttributedString;
-(void)fixAttributesInRange:(struct _NSRange )arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif