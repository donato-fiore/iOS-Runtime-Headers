// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIMESSAGEVIEWLAYOUTCONTEXT_H
#define AMSUIMESSAGEVIEWLAYOUTCONTEXT_H

@class NSMutableArray, UIBezierPath;

#import <Foundation/Foundation.h>

#import "AMSUIMessageView.h"

@interface AMSUIMessageViewLayoutContext : NSObject

@property (readonly, nonatomic) CGFloat accessorySpacing;
@property (nonatomic) CGRect accessoryViewFrame; // ivar: _accessoryViewFrame
@property (readonly, nonatomic) NSDirectionalEdgeInsets contentLayoutMargins;
@property (retain, nonatomic) NSMutableArray *footerButtonFrames; // ivar: _footerButtonFrames
@property (retain, nonatomic) NSMutableArray *footerButtonFramesPreFlatten; // ivar: _footerButtonFramesPreFlatten
@property (nonatomic) CGRect footerContainerViewFrame; // ivar: _footerContainerViewFrame
@property (nonatomic) CGRect imageViewFrame; // ivar: _imageViewFrame
@property (nonatomic) BOOL isDirty; // ivar: _isDirty
@property (nonatomic) CGSize lastFittingSize; // ivar: _lastFittingSize
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
-(BOOL)_isSymbolImage;
-(BOOL)_isTextOnlyBanner;
-(BOOL)isImageViewHidden;
-(CGFloat)_bannerMaxTextWidth;
-(CGFloat)_footerHeight;
-(CGFloat)_imageLength;
-(CGFloat)_interitemSpacing;
-(CGFloat)_labelSpacing;
-(CGFloat)_scaledUIValueForValue:(CGFloat)arg0 ;
-(CGFloat)leadingContentTextBaseline;
-(CGFloat)separatorThickness;
-(CGFloat)totalFooterButtonHeight;
-(id)initWithMessageView:(id)arg0 ;
-(struct CGSize )_makeImageViewSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_calculateFooterButtonFrames;
-(void)_updateWithRootFrame:(struct CGRect )arg0 sizing:(BOOL)arg1 ;
-(void)calculateAccessoryViewFrame;
-(void)calculateAccessoryViewSize;
-(void)calculateMainContentFrameRootFrame:(struct CGRect )arg0 ;
-(void)calculateTextViewExlcusionFrame;
-(void)calculateTextViewSizeInFrame:(struct CGRect )arg0 dirty:(BOOL)arg1 ;
-(void)invalidate;
-(void)layoutSubviewFrames;


@end


#endif