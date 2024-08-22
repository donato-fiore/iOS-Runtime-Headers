// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMER_H
#define HMDTIMER_H

@class NSString;
@protocol HMDTimerProvider;

#import <Foundation/Foundation.h>


@interface HMDTimer : NSObject <HMDTimerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;


@end


#endif