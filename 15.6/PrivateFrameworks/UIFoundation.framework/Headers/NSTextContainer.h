// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSTEXTCONTAINER_H
#define NSTEXTCONTAINER_H

@class UIView<NSTextContainerView>, NSArray, NSDictionary;
@protocol NSSecureCoding, NSTextLayoutOrientationProvider;

#import <Foundation/Foundation.h>

#import "NSLayoutManager.h"
#import "NSTextLayoutManager.h"

@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider>

 {
    NSLayoutManager *_layoutManager;
    UIView<NSTextContainerView> *_textView;
    CGSize _size;
    CGFloat _lineFragmentPadding;
    NSUInteger _maximumLines;
    __tcFlags _tcFlags;
    NSTextLayoutManager *_textLayoutManager;
    NSArray *_exclusionPaths;
    *CGPath _cachedBoundingPath;
    *__CFArray _cachedClippingAttributes;
    *__CFArray _cachedBounds;
    CGFloat _cacheBoundsMinY;
    CGFloat _cacheBoundsMaxY;
    CGFloat _minimumWidth;
    NSInteger _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    NSInteger _applicationFrameworkContext;
    BOOL _textViewSupportsAdaptiveColor;
}


@property (copy, nonatomic) NSArray *exclusionPaths;
@property (nonatomic) BOOL heightTracksTextView;
@property (nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) NSInteger layoutOrientation;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat lineFragmentPadding;
@property (nonatomic) NSUInteger maximumNumberOfLines;
@property (readonly, nonatomic, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property (nonatomic) CGSize size;
@property (readonly, weak, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (nonatomic) BOOL widthTracksTextView;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_containerObservesTextViewFrameChanges;
-(BOOL)_hasLayoutManager:(id)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(CGFloat)minimumLineFragmentWidth;
-(id)attributesForExtraLineFragment;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)markedTextAttributesAtCharacterIndex:(NSInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)renderingColorForDocumentColor:(id)arg0 ;
-(id)selectedTextAttributes;
-(id)textView;
-(struct CGPoint )textContainerOrigin;
-(struct CGRect )lineFragmentRectForProposedRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 writingDirection:(NSInteger)arg2 remainingRect:(struct CGRect *)arg3 ;
-(struct CGRect )lineFragmentRectForProposedRect:(struct CGRect )arg0 remainingRect:(struct CGRect *)arg1 ;
-(struct CGSize )containerSize;
-(struct NSEdgeInsets )textContainerInsetsForView:(id)arg0 ;
-(struct NSEdgeInsets )textContainerInsetsForView_iOS:(id)arg0 ;
-(void)_commonInit;
-(void)_containerTextViewFrameChanged:(id)arg0 ;
-(void)_resizeAccordingToTextView:(id)arg0 ;
-(void)coordinateAccess:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateTextContainerOrigin;
-(void)replaceLayoutManager:(id)arg0 ;
-(void)setAttributesForExtraLineFragment:(id)arg0 ;
-(void)setContainerSize:(struct CGSize )arg0 ;
-(void)setMinimumLineFragmentWidth:(CGFloat)arg0 ;
-(void)setTextView:(id)arg0 ;


@end


#endif