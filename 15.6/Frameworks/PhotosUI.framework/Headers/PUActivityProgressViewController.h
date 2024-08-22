// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUACTIVITYPROGRESSVIEWCONTROLLER_H
#define PUACTIVITYPROGRESSVIEWCONTROLLER_H

@class UIViewController, PLRoundProgressView;



@interface PUActivityProgressViewController : UIViewController {
    PLRoundProgressView *_progressView;
}




-(id)_progressView;
-(void)setFractionCompleted:(CGFloat)arg0 ;
-(void)viewDidLoad;


@end


#endif