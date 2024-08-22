// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFALLINGEDGESMOOTHER_H
#define SNFALLINGEDGESMOOTHER_H

@class NSValue;

#import <Foundation/Foundation.h>


@interface SNFallingEdgeSmoother : NSObject {
    ? _smoothingDuration;
    NSValue *_lastEventTime;
}




+(id)new;
-(BOOL)processValue:(BOOL)arg0 time:(struct ? )arg1 ;
-(id)init;
-(id)initWithSmoothingDuration:(struct ? )arg0 ;


@end


#endif