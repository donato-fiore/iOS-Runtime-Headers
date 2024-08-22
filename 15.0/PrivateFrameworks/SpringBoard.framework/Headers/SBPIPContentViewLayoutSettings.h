// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPCONTENTVIEWLAYOUTSETTINGS_H
#define SBPIPCONTENTVIEWLAYOUTSETTINGS_H

@class SBPIPDefaults;

#import <Foundation/Foundation.h>

#import "SBPIPContentViewLayoutContext.h"
#import "SBPIPContentViewLayoutMetrics.h"

@interface SBPIPContentViewLayoutSettings : NSObject {
    SBPIPContentViewLayoutContext *_context;
    SBPIPContentViewLayoutMetrics *_platformMetrics;
    SBPIPDefaults *_pipDefaults;
}




-(CGFloat)contentViewPadding;
-(CGFloat)contentViewPaddingWhileStashed;
-(CGFloat)defaultCornerRadius;
-(NSUInteger)currentContentViewPosition;
-(id)initWithPlatformMetrics:(id)arg0 contentSize:(struct CGSize )arg1 ;
-(id)platformMetrics;
-(struct CGSize )_contentViewSizeForAspectRatio:(struct CGSize )arg0 currentSize:(CGFloat)arg1 ;
-(struct CGSize )_maximumContentViewSizeForAspectRatio:(struct CGSize )arg0 maximumReferenceSize:(CGFloat)arg1 ;
-(struct CGSize )_minimumContentViewSizeForAspectRatio:(struct CGSize )arg0 minimumReferenceSize:(CGFloat)arg1 ;
-(struct CGSize )currentContentViewSizeForAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )defaultContentViewSizeForAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )maximumPossibleContentViewSizeForAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )maximumPreferredContentViewSizeForAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )minimumPossibleContentViewSizeForAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )minimumPreferredContentViewSizeForAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )minimumStashedTabSize;
-(void)setContentViewPosition:(NSUInteger)arg0 ;
-(void)setContentViewSize:(struct CGSize )arg0 ;
-(void)setMaximumSizeSpanForPreferredSizeTuning:(CGFloat)arg0 ;
-(void)setMinimumSizeSpanBetweenPreferredSizes:(CGFloat)arg0 ;
-(void)updatePlatformMetrics:(id)arg0 ;


@end


#endif