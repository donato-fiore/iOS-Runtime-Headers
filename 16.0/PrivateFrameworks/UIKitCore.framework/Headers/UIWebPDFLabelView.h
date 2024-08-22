// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBPDFLABELVIEW_H
#define UIWEBPDFLABELVIEW_H

@class NSTimer;


#import "UIView.h"
#import "UILabel.h"
#import "_UIBackdropView.h"

@interface UIWebPDFLabelView : UIView {
    UILabel *_label;
    _UIBackdropView *_backdropView;
    NSTimer *_timer;
}


@property (nonatomic) NSUInteger currentPageIndex; // ivar: currentPageIndex
@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;


-(CGFloat)_fadeOutDelay;
-(CGFloat)_fadeOutDuration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_fadeOutAnimationDidStop;
-(void)_makeRoundedCorners;
-(void)clearTimer;
-(void)dealloc;
-(void)fadeOut;
-(void)setText:(id)arg0 ;
-(void)showNowInSuperView:(id)arg0 atOrigin:(struct CGPoint )arg1 withText:(id)arg2 animated:(BOOL)arg3 ;
-(void)sizeToFit;


@end


#endif