// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDVRGBCAPTURETIMER_H
#define CIDVRGBCAPTURETIMER_H

@class NSTimer, NSNumber;

#import <Foundation/Foundation.h>


@interface CIDVRGBCaptureTimer : NSObject {
    NSTimer *_timer;
    NSNumber *_remainingDuration;
    id *_block;
}




-(id)initWithDuration:(CGFloat)arg0 block:(id)arg1 ;
-(void)_runBlock;
-(void)cancel;
-(void)pause;
-(void)resume;


@end


#endif