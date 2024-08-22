// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPDFPAGELABELVIEW_H
#define MUPDFPAGELABELVIEW_H

@class UIView, UILabel, UIVisualEffectView, UIBlurEffect, NSTimer;



@interface MUPDFPageLabelView : UIView {
    UILabel *_label;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    NSTimer *_timer;
}


@property (nonatomic) NSUInteger currentPageIndex; // ivar: currentPageIndex
@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;


-(CGFloat)_fadeOutDelay;
-(CGFloat)_fadeOutDuration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clearTimer;
-(void)dealloc;
-(void)fadeOut;
-(void)setText:(id)arg0 ;
-(void)showNowInSuperView:(id)arg0 withText:(id)arg1 ;


@end


#endif