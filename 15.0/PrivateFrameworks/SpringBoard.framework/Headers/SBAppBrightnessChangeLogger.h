// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPBRIGHTNESSCHANGELOGGER_H
#define SBAPPBRIGHTNESSCHANGELOGGER_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SBAppBrightnessChangeLogger : NSObject {
    NSString *_bundleID;
    NSInteger _brightnessLevel;
    NSDate *_eventTimestamp;
}




+(id)sharedInstance;
-(id)init;
-(void)_publishMetrics;
-(void)_publishMetricsIfNeeded;
-(void)_screenLocked;
-(void)noteApp:(id)arg0 setScreenBrightness:(CGFloat)arg1 ;


@end


#endif