// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPROGRESSINDICATORALERTCONTROLLER_H
#define PXPROGRESSINDICATORALERTCONTROLLER_H

@class UIAlertController, UIWindow, NSDate;

#import <Foundation/Foundation.h>


@interface PXProgressIndicatorAlertController : NSObject {
    BOOL _isCanceled;
    UIAlertController *_alertController;
    UIWindow *_window;
    NSDate *_alertPresentedDate;
}


@property (nonatomic) CGFloat delay; // ivar: _delay


+(id)beginShowingModalProgressWithDelay:(CGFloat)arg0 ;
-(void)_dismissAlert;
-(void)_presentAlert;
-(void)_startShowingProgress;
-(void)dealloc;
-(void)stopShowing;


@end


#endif