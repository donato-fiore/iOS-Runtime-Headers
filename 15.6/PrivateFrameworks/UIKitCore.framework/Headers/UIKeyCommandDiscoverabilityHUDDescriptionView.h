// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDDESCRIPTIONVIEW_H
#define UIKEYCOMMANDDISCOVERABILITYHUDDESCRIPTIONVIEW_H

@class NSDictionary, NSMutableDictionary, NSString, UIFont;
@protocol NSLayoutManagerDelegate;


#import "UIView.h"
#import "UITextView.h"

@interface UIKeyCommandDiscoverabilityHUDDescriptionView : UIView <NSLayoutManagerDelegate>

 {
    UITextView *_textView;
    NSDictionary *_textAttributes;
    NSMutableDictionary *_glyphViews;
    NSUInteger _glyphSize;
    CGSize _intrinsicContentSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat spaceWidth; // ivar: _spaceWidth
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


-(NSInteger)layoutManager:(id)arg0 shouldUseAction:(NSInteger)arg1 forControlCharacterAtIndex:(NSUInteger)arg2 ;
-(NSUInteger)layoutManager:(id)arg0 shouldGenerateGlyphs:(*unsigned short)arg1 properties:(*NSInteger)arg2 characterIndexes:(*NSUInteger)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange )arg5 ;
-(id)initWithText:(id)arg0 font:(id)arg1 lineHeight:(CGFloat)arg2 lineSpacing:(CGFloat)arg3 color:(id)arg4 edgeInsets:(struct UIEdgeInsets )arg5 ;
-(struct CGRect )layoutManager:(id)arg0 boundingBoxForControlGlyphAtIndex:(NSUInteger)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 glyphPosition:(struct CGPoint )arg4 characterIndex:(NSUInteger)arg5 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;


@end


#endif