// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONACTIVITYVIEW_H
#define CKPINNEDCONVERSATIONACTIVITYVIEW_H

@class UIView, CAShapeLayer, NSMutableArray, NSString, NSArray;
@protocol CKPinnedConversationActivityItemViewDelegate;


#import "CKPinnedConversationActivitySnapshot.h"

@interface CKPinnedConversationActivityView : UIView <CKPinnedConversationActivityItemViewDelegate>



@property (retain, nonatomic) CAShapeLayer *activityItemAttachmentCircleDebugLayer; // ivar: _activityItemAttachmentCircleDebugLayer
@property (nonatomic) NSInteger activityItemOriginationDirection; // ivar: _activityItemOriginationDirection
@property (nonatomic) CGPoint activityItemOriginationPoint; // ivar: _activityItemOriginationPoint
@property (nonatomic) CGRect activityItemOriginationSubAvatarFrame; // ivar: _activityItemOriginationSubAvatarFrame
@property (retain, nonatomic) NSMutableArray *activityItemViews; // ivar: _activityItemViews
@property (nonatomic) CGRect avatarFrame; // ivar: _avatarFrame
@property (retain, nonatomic) NSMutableArray *contactItemViews; // ivar: _contactItemViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedContacts;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAShapeLayer *innerContentAlignmentDebugLayer; // ivar: _innerContentAlignmentDebugLayer
@property (nonatomic) CGRect innerContentAlignmentFrame; // ivar: _innerContentAlignmentFrame
@property (retain, nonatomic) CKPinnedConversationActivitySnapshot *latestSnapshot; // ivar: _latestSnapshot
@property (retain, nonatomic) CAShapeLayer *originationPointDebugLayer; // ivar: _originationPointDebugLayer
@property (retain, nonatomic) CAShapeLayer *outerContentAlignmentDebugLayer; // ivar: _outerContentAlignmentDebugLayer
@property (nonatomic) CGRect outerContentAlignmentFrame; // ivar: _outerContentAlignmentFrame
@property (nonatomic) BOOL showContentAlignmentDebugFrames; // ivar: _showContentAlignmentDebugFrames
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressingActivity) BOOL suppressingActivity; // ivar: _suppressingActivity


-(BOOL)haveAttachedContactItemViewsForActivityViews:(id)arg0 ;
-(BOOL)nextContactItemIsClockwiseForOriginationDirection:(NSInteger)arg0 contactItemAlignment:(NSInteger)arg1 ;
-(CGFloat)activityItemAttachmentCircleRadiusInsetForAvatarFrame:(struct CGRect )arg0 ;
-(CGFloat)circleXCoordinateForYCoordinate:(CGFloat)arg0 radius:(CGFloat)arg1 centerPoint:(struct CGPoint )arg2 contentAlignment:(NSInteger)arg3 ;
-(CGFloat)contactItemViewCenterXCoordinateForYCoordinate:(CGFloat)arg0 avatarFrame:(struct CGRect )arg1 contentAlignment:(NSInteger)arg2 ;
-(CGFloat)contactItemViewDiameterForAvatarFrame:(struct CGRect )arg0 ;
-(CGFloat)tailAttachmentXCoordinateForYCoordinate:(CGFloat)arg0 avatarFrame:(struct CGRect )arg1 contentAlignment:(NSInteger)arg2 ;
-(NSInteger)activityViewContentAlignmentForContactItemAlignment:(NSInteger)arg0 ;
-(id)_activityItemViewWithActivityItemIdentifier:(id)arg0 ;
-(id)_presentedActivityItems;
-(id)_unattachedContactItemViews;
-(id)contactItemViewMatchingContactItemIdentifier:(id)arg0 fromContactItemViews:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_convertPointInOwnCoordinateSpace:(struct CGPoint )arg0 toUnscaledCoordinateSpaceOfSubview:(id)arg1 ;
-(struct CGPoint )pointAlongCircle:(struct CGRect )arg0 atArcLength:(CGFloat)arg1 fromPoint:(struct CGPoint )arg2 clockwise:(BOOL)arg3 ;
-(void)_layoutUnattachedContactItemViews:(id)arg0 withContentScale:(id)arg1 applyingTransform:(BOOL)arg2 ;
-(void)_layoutViewsAssociatedWithActivityItemViews:(id)arg0 excludingContactItemViews:(id)arg1 withContentScale:(id)arg2 applyingTransform:(BOOL)arg3 updatingActivityItemViews:(BOOL)arg4 updatingAttachedContactItemViews:(BOOL)arg5 ;
-(void)_updateSnapshotAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)activityItemViewNeedsResize:(id)arg0 ;
-(void)applySnapshot:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)layoutSubviews;
-(void)resetToEmptySnapshot;


@end


#endif