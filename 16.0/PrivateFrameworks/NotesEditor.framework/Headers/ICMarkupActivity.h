// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMARKUPACTIVITY_H
#define ICMARKUPACTIVITY_H

@class UIActivity, ICAttachment, UIView, UIViewController;



@interface ICMarkupActivity : UIActivity

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *frameBlock; // ivar: _frameBlock
@property (weak, nonatomic) UIView *fromView; // ivar: _fromView
@property (nonatomic) NSUInteger inkStyle; // ivar: _inkStyle
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
// -(id)initFromView:(id)arg0 presentingViewController:(id)arg1 frameBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif