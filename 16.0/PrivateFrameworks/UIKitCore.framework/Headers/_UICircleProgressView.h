// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICIRCLEPROGRESSVIEW_H
#define _UICIRCLEPROGRESSVIEW_H



#import "UIView.h"
#import "UIColor.h"

@interface _UICircleProgressView : UIView

@property (nonatomic) CGFloat progress;
@property (readonly, nonatomic) UIColor *progressColor;
@property (nonatomic) CGFloat progressLineWidth;
@property (nonatomic) NSInteger progressStartPoint;
@property (nonatomic) BOOL showProgressTray;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)animateProgressCompletedWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif