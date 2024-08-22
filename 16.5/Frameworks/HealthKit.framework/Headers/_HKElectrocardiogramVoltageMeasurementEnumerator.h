// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKELECTROCARDIOGRAMVOLTAGEMEASUREMENTENUMERATOR_H
#define _HKELECTROCARDIOGRAMVOLTAGEMEASUREMENTENUMERATOR_H

@class NSEnumerator;


#import "HKElectrocardiogram.h"
#import "HKUnit.h"

@interface _HKElectrocardiogramVoltageMeasurementEnumerator : NSEnumerator {
    HKElectrocardiogram *_electrocardiogram;
    CGFloat _samplingHertz;
    HKUnit *_microvoltsUnit;
    NSInteger _index;
    __wrap_iter<const float *> _current;
    __wrap_iter<const float *> _end;
}




-(id)initWithElectrocardiogram:(id)arg0 leadIMicroVoltsBegin:(struct __wrap_iter<const float *> )arg1 end:(struct __wrap_iter<const float *> )arg2 ;
-(id)nextObject;


@end


#endif