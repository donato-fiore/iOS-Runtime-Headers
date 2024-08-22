// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONLISTTYPINGINDICATORVIEW_H
#define CKCONVERSATIONLISTTYPINGINDICATORVIEW_H

@class UIView;


#import "CKConversationListTypingIndicatorLayer.h"

@interface CKConversationListTypingIndicatorView : UIView

@property (nonatomic) BOOL flipForRTLLayout; // ivar: _flipForRTLLayout
@property (nonatomic, getter=isHighlighted) BOOL highlightedState; // ivar: _highlightedState
@property (nonatomic) BOOL isDarkAqua; // ivar: _isDarkAqua
@property (nonatomic) CGFloat typingIndicatorScale; // ivar: _typingIndicatorScale
@property (retain, nonatomic) CKConversationListTypingIndicatorLayer *typingLayer; // ivar: _typingLayer


-(id)init;
-(void)_updateTypingLayerTransform;
-(void)destroyTypingLayer;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(id)arg0 ;
-(void)stopAnimation;


@end


#endif