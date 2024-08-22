// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPROGRESSINDICATORALERTCONTROLLER_H
#define PXPROGRESSINDICATORALERTCONTROLLER_H

@class NSDate, UIAlertController, UIWindow, NSString;
@protocol PXMutableProgressIndicatorAlertController;

#import <Foundation/Foundation.h>


@interface PXProgressIndicatorAlertController : NSObject <PXMutableProgressIndicatorAlertController>

 {
    BOOL _isCanceled;
    NSDate *_alertPresentedDate;
    UIAlertController *_alertController;
    UIWindow *_window;
}


@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) BOOL isInternalUIAllowed; // ivar: _isInternalUIAllowed
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) CGFloat minimumDisplayDuration; // ivar: _minimumDisplayDuration
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)beginShowingModalProgressWithConfiguration:(id)arg0 ;
-(id)init;
-(void)_dismissAlert:(id)arg0 ;
-(void)_presentAlert;
-(void)_startShowingProgress;
-(void)dealloc;
-(void)stopShowing;
-(void)stopShowing:(id)arg0 ;


@end


#endif