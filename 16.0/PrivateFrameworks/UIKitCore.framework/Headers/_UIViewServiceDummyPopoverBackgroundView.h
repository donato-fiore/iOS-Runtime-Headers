// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWSERVICEDUMMYPOPOVERBACKGROUNDVIEW_H
#define _UIVIEWSERVICEDUMMYPOPOVERBACKGROUNDVIEW_H



#import "UIPopoverBackgroundView.h"

@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {
    CGFloat arrowOffset;
    NSUInteger arrowDirection;
}




+(BOOL)wantsDefaultContentAppearance;
+(CGFloat)arrowBase;
+(CGFloat)arrowHeight;
+(struct UIEdgeInsets )contentViewInsets;
-(CGFloat)_shadowOpacity;
-(CGFloat)_shadowRadius;
-(CGFloat)arrowOffset;
-(NSUInteger)arrowDirection;
-(struct CGSize )_shadowOffset;
-(void)setArrowDirection:(NSUInteger)arg0 ;
-(void)setArrowOffset:(CGFloat)arg0 ;


@end


#endif