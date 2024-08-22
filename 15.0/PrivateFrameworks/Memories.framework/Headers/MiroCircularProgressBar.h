// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROCIRCULARPROGRESSBAR_H
#define MIROCIRCULARPROGRESSBAR_H

@class UIView, NSString, UIColor;
@protocol CAAnimationDelegate, VisualCompletionInformable;



@interface MiroCircularProgressBar : UIView <CAAnimationDelegate>



@property (nonatomic) CGFloat animationDuration;
@property (nonatomic) CGFloat arcLineWidth;
@property (nonatomic) CGFloat circleLineWidth;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VisualCompletionInformable> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (readonly) Class superclass;


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif