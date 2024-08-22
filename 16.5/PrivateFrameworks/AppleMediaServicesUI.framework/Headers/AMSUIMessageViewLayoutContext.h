// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIMESSAGEVIEWLAYOUTCONTEXT_H
#define AMSUIMESSAGEVIEWLAYOUTCONTEXT_H

@class NSMutableArray, UIBezierPath;

#import <Foundation/Foundation.h>

#import "AMSUIMessageView.h"

@interface AMSUIMessageViewLayoutContext : NSObject

@property (nonatomic) CGRect accessorySecondaryViewFrame; // ivar: _accessorySecondaryViewFrame
@property (readonly, nonatomic) CGFloat accessorySpacing;
@property (nonatomic) CGRect accessoryViewFrame; // ivar: _accessoryViewFrame
@property (readonly, nonatomic) NSDirectionalEdgeInsets contentLayoutMargins;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) NSMutableArray *footerButtonFrames; // ivar: _footerButtonFrames
@property (retain, nonatomic) NSMutableArray *footerButtonFramesPreFlatten; // ivar: _footerButtonFramesPreFlatten
@property (nonatomic) CGRect footerContainerViewFrame; // ivar: _footerContainerViewFrame
@property (nonatomic) CGRect imageViewFrame; // ivar: _imageViewFrame
@property (nonatomic) BOOL isDirty; // ivar: _isDirty
@property (nonatomic) CGSize lastFittingSize; // ivar: _lastFittingSize
@property (nonatomic) CGRect lastMessageViewFrame; // ivar: _lastMessageViewFrame
@property (nonatomic) CGSize lastSize; // ivar: _lastSize
@property (nonatomic) CGRect mainContentFrame; // ivar: _mainContentFrame
@property (nonatomic) CGRect maskViewFrame; // ivar: _maskViewFrame
@property (weak, nonatomic) AMSUIMessageView *messageView; // ivar: _messageView
@property (retain, nonatomic) NSMutableArray *separatorViewFrames; // ivar: _separatorViewFrames
@property (readonly, nonatomic) BOOL shouldUseStackedLayout;
@property (nonatomic) CGSize textViewContentHuggingSize; // ivar: _textViewContentHuggingSize
@property (retain, nonatomic) UIBezierPath *textViewExclusionPath; // ivar: _textViewExclusionPath
@property (nonatomic) CGRect textViewFrame; // ivar: _textViewFrame


-(BOOL)_isAccessoryViewLeading;
-(BOOL)_isFooterButtonPartOfContentFrame;
-(BOOL)_isIconImageTopAligned;
-(BOOL)_isSymbolImage;
-(BOOL)_isTextOnlyBanner;
-(BOOL)_shouldOffsetFooterButtonFromMainContentView;
-(BOOL)_shouldTextViewTextFillUnderCloseButton;
-(BOOL)isImageViewHidden;
-(CGFloat)_bannerMaxTextWidth;
-(CGFloat)_footerButtonSpacing;
-(CGFloat)_footerMinimumHeight;
-(CGFloat)_imageLength;
-(CGFloat)_imageToLabelSpacing;
-(CGFloat)_interitemSpacing;
-(CGFloat)_scaledUIValueForValue:(CGFloat)arg0 ;
-(CGFloat)leadingContentTextBaseline;
-(CGFloat)separatorThickness;
-(CGFloat)totalFooterButtonHeight;
-(NSUInteger)effectiveImageStyle;
-(id)initWithMessageView:(id)arg0 ;
-(struct CGRect )_effectiveTextViewFrame;
-(struct CGSize )_makeImageViewSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_calculateFooterButtonFrames;
-(void)_updateWithRootFrame:(struct CGRect )arg0 ;
-(void)calculateAccessorySecondaryViewFrame;
-(void)calculateAccessorySecondaryViewSize;
-(void)calculateAccessoryViewFrame;
-(void)calculateAccessoryViewSize;
-(void)calculateMainContentFrameRootFrame:(struct CGRect )arg0 ;
-(void)calculateTextViewExclusionFrame;
-(void)calculateTextViewSizeInFrame:(struct CGRect )arg0 dirty:(BOOL)arg1 ;
-(void)invalidate;
-(void)layoutSubviewFrames;


@end


#endif