// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMEMORYPRESSURE_H
#define AMSMEMORYPRESSURE_H


#import <Foundation/Foundation.h>


@interface AMSMemoryPressure : NSObject



+(id)_memoryPressureStatusForMemoryPressure:(unsigned int)arg0 ;
+(id)lastKnownStatus;
+(id)observable;
+(void)initialize;
+(void)subscribe:(id)arg0 ;
+(void)unsubscribe:(id)arg0 ;


@end


#endif