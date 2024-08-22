// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDWORKOUTCONDENSERBUFFERDATUM_H
#define _HDWORKOUTCONDENSERBUFFERDATUM_H


#import <Foundation/Foundation.h>


@interface _HDWorkoutCondenserBufferDatum : NSObject {
    unsigned char _UUIDBytes;
    BOOL _isSeries;
    CGFloat _startTime;
    CGFloat _endTime;
    CGFloat _value;
}




-(id)description;
-(id)init;


@end


#endif