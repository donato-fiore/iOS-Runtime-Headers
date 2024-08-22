// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETETIMERPRIMITIVES_H
#define CRKCONCRETETIMERPRIMITIVES_H

@protocol CRKTimerPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteTimerPrimitives : NSObject <CRKTimerPrimitives>





-(id)scheduleTimerWithIdentifier:(id)arg0 timeInterval:(CGFloat)arg1 fireHandler:(id)arg2 ;


@end


#endif