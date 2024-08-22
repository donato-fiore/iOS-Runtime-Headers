// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPINNEDCONVERSATIONMEDIAOBJECTBUBBLE_H
#define CKPINNEDCONVERSATIONMEDIAOBJECTBUBBLE_H

@class UIImageView, NSLayoutConstraint;


#import "CKPinnedConversationTailedActivityItemView.h"
#import "CKPinnedConversationMediaObjectActivityItem.h"

@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {
    CGFloat _pillCornerRadius;
    NSInteger _activityItemViewContentScale;
}


@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // ivar: _imageViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint; // ivar: _imageViewWidthConstraint
@property (readonly, nonatomic) CKPinnedConversationMediaObjectActivityItem *mediaObjectActivityItem; // ivar: _mediaObjectActivityItem


-(BOOL)isAnimojiVideo;
-(BOOL)isSticker;
-(BOOL)supportsActivityItemViewContentScale;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(CGFloat)contentViewHorizontalInsetForPillCornerRadius;
-(CGFloat)pillCornerRadius;
-(NSInteger)activityItemViewContentScale;
-(NSInteger)contentViewContentMode;
-(id)_previewImage;
-(id)initWithMediaObjectActivityItem:(id)arg0 ;
-(struct UIEdgeInsets )contentViewPadding;
-(void)_updateImageViewSizeConstraints;
-(void)_updateMediaObjectPreview;
-(void)_updatePillCornerRadius;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)setActivityItem:(id)arg0 ;
-(void)setActivityItemViewContentScale:(NSInteger)arg0 ;
-(void)setParentAvatarViewSize:(struct CGSize )arg0 ;


@end


#endif