// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8PAPERKIT13CRTEXTSTORAGE_H
#define _TTC8PAPERKIT13CRTEXTSTORAGE_H

@class NSTextStorage, NSString;



@interface _TtC8PaperKit13CRTextStorage : NSTextStorage {
    ? mergeableString;
    ? stringAttributes;
}


@property (nonatomic, readonly) NSString *string;


-(id)attributesAtIndex:(NSInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)init;
-(id)initWithAttachment:(id)arg0 attributes:(id)arg1 ;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfMarkdownFileAtURL:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)initWithFileURL:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)initWithMarkdown:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithMarkdownString:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif