// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTKITRENDERER_H
#define CKTEXTKITRENDERER_H

@class UITraitCollection;
@protocol CKTextKitTruncating;

#import <Foundation/Foundation.h>

#import "CKTextKitContext.h"
#import "CKTextKitShadower.h"

@interface CKTextKitRenderer : NSObject {
    CGSize _calculatedSize;
    CGFloat _verticalOffset;
}


@property (readonly, nonatomic) CKTextKitAttributes attributes; // ivar: _attributes
@property (readonly, nonatomic) CGSize constrainedSize; // ivar: _constrainedSize
@property (readonly, nonatomic) CKTextKitContext *context; // ivar: _context
@property (readonly, nonatomic) CKTextKitShadower *shadower; // ivar: _shadower
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSObject<CKTextKitTruncating> *truncater; // ivar: _truncater


-(NSUInteger)lineCount;
-(NSUInteger)nearestTextIndexAtPosition:(struct CGPoint )arg0 ;
-(id)initWithTextKitAttributes:(struct CKTextKitAttributes *)arg0 constrainedSize:(struct CGSize )arg1 ;
-(id)rectsForTextRange:(struct _NSRange )arg0 measureOption:(NSUInteger)arg1 ;
-(id)textCheckingResultAtPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_internalRectForGlyphAtIndex:(NSUInteger)arg0 measureOption:(NSUInteger)arg1 layoutManager:(id)arg2 textContainer:(id)arg3 textStorage:(id)arg4 ;
-(struct CGRect )frameForTextRange:(struct _NSRange )arg0 ;
-(struct CGRect )trailingRect;
-(struct CGSize )size;
-(struct vector<_NSRange, std::allocator<_NSRange>> )visibleRanges;
-(void)_calculateSize;
-(void)drawInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 ;
-(void)enumerateTextIndexesAtPosition:(struct CGPoint )arg0 usingBlock:(id)arg1 ;


@end


#endif