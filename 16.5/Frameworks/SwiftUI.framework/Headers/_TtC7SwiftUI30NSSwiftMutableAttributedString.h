// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI30NSSWIFTMUTABLEATTRIBUTEDSTRING_H
#define _TTC7SWIFTUI30NSSWIFTMUTABLEATTRIBUTEDSTRING_H

@class NSTextStorage, NSString;



@interface _TtC7SwiftUI30NSSwiftMutableAttributedString : NSTextStorage {
    ? _storage;
}


@property (nonatomic, readonly) NSInteger length;
@property (nonatomic, readonly) NSString *string;


-(BOOL)isEqualToAttributedString:(id)arg0 ;
-(id)_nsAttributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)attribute:(id)arg0 atIndex:(NSInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)attributesAtIndex:(NSInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfMarkdownFileAtURL:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)initWithFileURL:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)initWithHTML:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 ;
-(id)initWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithMarkdown:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithMarkdownString:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)addAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)appendAttributedString:(id)arg0 ;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)ensureAttributesAreFixedInRange:(struct _NSRange )arg0 ;
-(void)enumerateAttribute:(id)arg0 inRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateAttributesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)fixAttributesInRange:(struct _NSRange )arg0 ;
-(void)insertAttributedString:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)invalidateAttributesInRange:(struct _NSRange )arg0 ;
-(void)removeAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributedString:(id)arg0 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif