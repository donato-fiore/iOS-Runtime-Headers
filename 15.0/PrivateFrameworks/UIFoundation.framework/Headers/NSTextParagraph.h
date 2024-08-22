// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTPARAGRAPH_H
#define NSTEXTPARAGRAPH_H

@class NSAttributedString, NSMutableArray, NSDictionary;


#import "NSTextElement.h"
#import "NSTextRange.h"

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    _NSRange _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    NSInteger _resolvedBaseDirection;
    NSInteger _fallbackBaseDirection;
    NSMutableArray *_textLayoutFragments;
    unsigned char _containsTextAttachments;
}


@property (readonly) NSAttributedString *attributedString;
@property (copy) NSDictionary *attributes; // ivar: _attributes
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;


+(id)textParagraphsForAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)_containsTextAttachments;
-(NSInteger)_resolvedBaseWritingDirectionWithFallbackDirection:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)initWithTextAttachment:(id)arg0 attributes:(id)arg1 ;
-(id)initWithTextContentManager:(id)arg0 ;
-(id)paragraphRange;
-(struct CGSize )estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg0 ;
-(void)_setContainsTextAttachments:(BOOL)arg0 ;
-(void)dealloc;
-(void)synchronizeDocumentRange;


@end


#endif