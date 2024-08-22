// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPINNEDCONVERSATIONTYPINGBUBBLE_H
#define CKPINNEDCONVERSATIONTYPINGBUBBLE_H

@class UIView, CAShapeLayer, CALayer, CAReplicatorLayer;
@protocol CKPinnedConversationActivityItemView, CKPinnedConversationActivityItem, CKPinnedConversationActivityItemViewDelegate;


#import "CKPinnedConversationActivityItemViewBackdropLayer.h"
#import "CKPinnedConversationActivityItemViewShadowLayer.h"
#import "CKPinnedConversationTypingBubbleActivityItem.h"

@interface CKPinnedConversationTypingBubble : UIView <CKPinnedConversationActivityItemView>



@property (retain, nonatomic) NSObject<CKPinnedConversationActivityItem> *activityItem;
@property (nonatomic) NSInteger activityItemViewContentScale; // ivar: _activityItemViewContentScale
@property (weak, nonatomic) NSObject<CKPinnedConversationActivityItemViewDelegate> *activityItemViewDelegate; // ivar: _activityItemViewDelegate
@property (retain, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer; // ivar: _backdropLayer
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer; // ivar: _backdropMaskShapeLayer
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer; // ivar: _broadShadowLayer
@property (nonatomic) NSInteger originationDirection; // ivar: _originationDirection
@property (nonatomic) NSInteger originationHorizontalDirection; // ivar: _originationHorizontalDirection
@property (nonatomic) CGPoint originationPoint; // ivar: _originationPoint
@property (nonatomic) CGSize parentAvatarViewSize; // ivar: _parentAvatarViewSize
@property (nonatomic) CGFloat preferredTailAttachmentPointXCoordinate; // ivar: _preferredTailAttachmentPointXCoordinate
@property (readonly, nonatomic) BOOL supportsActivityItemViewContentScale;
@property (readonly, nonatomic) BOOL supportsAlignmentWithOriginationSubAvatarFrame;
@property (readonly, nonatomic) CGPoint tailAttachmentPoint;
@property (retain, nonatomic) CAShapeLayer *thinkingDot; // ivar: _thinkingDot
@property (retain, nonatomic) CALayer *thinkingDotContainer; // ivar: _thinkingDotContainer
@property (retain, nonatomic) CAReplicatorLayer *thinkingDots; // ivar: _thinkingDots
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer; // ivar: _tightShadowLayer
@property (readonly, nonatomic) CKPinnedConversationTypingBubbleActivityItem *typingBubbleActivityItem; // ivar: _typingBubbleActivityItem


-(CGFloat)largeBubbleCornerRadius;
-(NSUInteger)tailCornerAnchor;
-(id)initWithActivityItem:(id)arg0 ;
-(struct CGPoint )mediumBubbleOffset;
-(struct CGPoint )smallBubbleOffset;
-(struct CGSize )largeBubbleSize;
-(struct CGSize )mediumBubbleSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )smallBubbleSize;
-(void)_updateThinkingDotColor;
-(void)_updateUserInterfaceStyles;
-(void)calculateBezierPathWithOutputsForPath:(*id)arg0 largeBubbleFrame:(struct CGRect *)arg1 mediumBubbleFrame:(struct CGRect *)arg2 smallBubbleFrame:(struct CGRect *)arg3 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif