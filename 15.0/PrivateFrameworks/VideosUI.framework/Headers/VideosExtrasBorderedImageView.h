// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASBORDEREDIMAGEVIEW_H
#define VIDEOSEXTRASBORDEREDIMAGEVIEW_H

@class UIImageView, UIColor;



@interface VideosExtrasBorderedImageView : UIImageView

@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGAffineTransform deferredTransform; // ivar: _deferredTransform
@property (nonatomic) BOOL shouldDeferSettingTransform; // ivar: _shouldDeferSettingTransform
@property (nonatomic) BOOL shouldSkipImageWhenReplicatingState; // ivar: _shouldSkipImageWhenReplicatingState
@property (nonatomic) BOOL shouldUseTransformWhenReplicatingState; // ivar: _shouldUseTransformWhenReplicatingState


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)replicateStateFromImageView:(id)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif