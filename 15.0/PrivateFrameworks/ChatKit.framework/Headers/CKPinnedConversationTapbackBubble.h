// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONTAPBACKBUBBLE_H
#define CKPINNEDCONVERSATIONTAPBACKBUBBLE_H

@class UIView, CAShapeLayer;
@protocol CKPinnedConversationActivityItemView, CKPinnedConversationActivityItem, CKPinnedConversationActivityItemViewDelegate;


#import "CKPinnedConversationActivityItemViewBackdropLayer.h"
#import "CKPinnedConversationActivityItemViewShadowLayer.h"
#import "CKPinnedConversationTapbackBubbleActivityItem.h"
#import "CKAcknowledgmentGlyphView.h"

@interface CKPinnedConversationTapbackBubble : UIView <CKPinnedConversationActivityItemView>



@property (nonatomic) NSInteger acknowledgmentType;
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
@property (readonly, nonatomic) CKPinnedConversationTapbackBubbleActivityItem *tapbackActivityItem; // ivar: _tapbackActivityItem
@property (retain, nonatomic) CKAcknowledgmentGlyphView *tapbackGlyph; // ivar: _tapbackGlyph
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer; // ivar: _tightShadowLayer


-(BOOL)flipHorizontally;
-(BOOL)flipVertically;
-(char)colorTypeForTapBack:(NSInteger)arg0 ;
-(id)initWithActivityItem:(id)arg0 ;
-(struct CGRect )largeTailBalloonFrameForSize:(struct CGSize )arg0 ;
-(struct CGRect )smallTailBalloonFrameForSize:(struct CGSize )arg0 ;
-(struct CGRect )tapbackBalloonFrameForSize:(struct CGSize )arg0 ;
-(struct CGSize )largeTailBalloonSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )smallTailBalloonSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )tapbackBalloonSizeForSize:(struct CGSize )arg0 ;
-(void)_updateAcknowledgmentType;
-(void)_updateUserInterfaceStyles;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif