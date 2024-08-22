// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXPERFTIMER_H
#define JFXPERFTIMER_H


#import <Foundation/Foundation.h>


@interface JFXPerfTimer : NSObject {
    CGFloat _start;
    CGFloat _end;
}




-(CGFloat)elapsedTime;
-(CGFloat)elapsedTimeMS;
-(CGFloat)end;
-(id)init;
-(void)start;


@end


#endif