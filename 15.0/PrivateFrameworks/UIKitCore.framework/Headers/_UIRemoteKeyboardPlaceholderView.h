// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIREMOTEKEYBOARDPLACEHOLDERVIEW_H
#define _UIREMOTEKEYBOARDPLACEHOLDERVIEW_H

@class NSString;
@protocol UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder;


#import "UIView.h"
#import "UIWindowScene.h"

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder>

 {
    UIView *_mirroredView;
    CGSize _fixedSize;
    id *_sizeBlock;
    UIWindowScene *_sceneForHeight;
    BOOL _isLocalMinimumHeight;
}


@property (retain, nonatomic) UIView *associatedView; // ivar: _associatedView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *fallbackView; // ivar: _fallbackView
@property (nonatomic) CGSize fixedSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLocalMinimumHeightPlaceholder;
@property (readonly, retain) UIView *placeheldView;
@property (readonly) Class superclass;


+(id)placeholderForView:(id)arg0 ;
+(id)placeholderWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
// +(id)placeholderWithWidthSizer:(id)arg0 heightWithScene:(unk)arg1  ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)refreshPlaceholder;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGRect )_compatibleBounds;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )leftContentViewSize;
-(struct CGSize )rightContentViewSize;
-(void)_beginSplitTransitionIfNeeded:(CGFloat)arg0 gapWidth:(CGFloat)arg1 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg0 ;
-(void)_isPlaceholderViewSelector;
-(void)_setLeftOffset:(CGFloat)arg0 gapWidth:(CGFloat)arg1 ;
-(void)_setProgress:(CGFloat)arg0 boundedBy:(CGFloat)arg1 ;
-(void)dealloc;
-(void)didEndSplitTransition;
-(void)layoutMergedSubviews;
-(void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize )arg0 rightContentSize:(struct CGSize )arg1 ;
-(void)updateMergedSubviewConstraints;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize )arg0 rightContentSize:(struct CGSize )arg1 ;
-(void)willBeginSplitTransition;


@end


#endif