// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISTATUSBARSTYLEOVERRIDELOGGINGCAPTURE_H
#define TISTATUSBARSTYLEOVERRIDELOGGINGCAPTURE_H


#import <Foundation/Foundation.h>


@interface TIStatusBarStyleOverrideLoggingCapture : NSObject



+(*NSInteger)_loggingCaptureOverrideCountPtr;
+(NSInteger)_decrementLoggingCaptureOverride;
+(NSInteger)_incrementLoggingCaptureOverride;
+(void)_statusBarStyleOverrideLoggingCapture:(BOOL)arg0 ;
+(void)acquireLoggingCaptureOverride;
+(void)releaseLoggingCaptureOverride;
-(id)init;
-(void)dealloc;


@end


#endif