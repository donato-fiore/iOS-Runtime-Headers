// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONTAILEDACTIVITYITEMVIEW_H
#define CKPINNEDCONVERSATIONTAILEDACTIVITYITEMVIEW_H

@class UIView, CAShapeLayer;
@protocol CKPinnedConversationActivityItemView, CKPinnedConversationActivityItem, CKPinnedConversationActivityItemViewDelegate;


#import "CKPinnedConversationActivityItemViewBackdropLayer.h"
#import "CKPinnedConversationActivityItemViewShadowLayer.h"

@interface CKPinnedConversationTailedActivityItemView : UIView <CKPinnedConversationActivityItemView>



@property (retain, nonatomic) NSObject<CKPinnedConversationActivityItem> *activityItem; // ivar: _activityItem
@property (nonatomic) NSInteger activityItemViewContentScale; // ivar: _activityItemViewContentScale
@property (weak, nonatomic) NSObject<CKPinnedConversationActivityItemViewDelegate> *activityItemViewDelegate; // ivar: _activityItemViewDelegate
@property (retain, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer; // ivar: _backdropLayer
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer; // ivar: _backdropMaskShapeLayer
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer; // ivar: _broadShadowLayer
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSInteger contentViewContentMode;
@property (readonly, nonatomic) CGFloat contentViewHorizontalInsetForPillCornerRadius;
@property (readonly, nonatomic) UIEdgeInsets contentViewPadding;
@property (retain, nonatomic) CAShapeLayer *contentViewStrokeLayer; // ivar: _contentViewStrokeLayer
@property (nonatomic) NSInteger originationDirection; // ivar: _originationDirection
@property (nonatomic) NSInteger originationHorizontalDirection; // ivar: _originationHorizontalDirection
@property (nonatomic) CGPoint originationPoint; // ivar: _originationPoint
@property (nonatomic) CGSize parentAvatarViewSize; // ivar: _parentAvatarViewSize
@property (readonly, nonatomic) CGFloat pillCornerRadius; // ivar: _pillCornerRadius
@property (nonatomic) CGFloat preferredTailAttachmentPointXCoordinate; // ivar: _preferredTailAttachmentPointXCoordinate
@property (readonly, nonatomic) BOOL supportsActivityItemViewContentScale;
@property (readonly, nonatomic) BOOL supportsAlignmentWithOriginationSubAvatarFrame;
@property (readonly, nonatomic) CGPoint tailAttachmentPoint;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer; // ivar: _tightShadowLayer


-(CGFloat)balloonCornerRadius;
-(CGFloat)balloonTailHeight;
-(CGFloat)balloonTailRadius;
-(CGFloat)balloonTailWidth;
-(id)_pathForTailedBalloonSegmentWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 anchorPoint:(struct CGPoint )arg2 originationHorizontalDirection:(NSInteger)arg3 originationDirection:(NSInteger)arg4 ;
-(id)initWithActivityItem:(id)arg0 contentView:(id)arg1 needsContentViewStroke:(BOOL)arg2 ;
-(struct CGPoint )tailAttachmentPointWithOutputForMinimumContinousAnchorX:(*CGFloat)arg0 maximumContinuousAnchorX:(*CGFloat)arg1 ;
-(struct CGRect )pillRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateUserInterfaceStyles;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif