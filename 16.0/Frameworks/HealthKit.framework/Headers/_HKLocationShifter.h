// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKLOCATIONSHIFTER_H
#define _HKLOCATIONSHIFTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HKLocationShifter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)isShiftRequiredForLocations:(id)arg0 ;
-(id)init;
-(void)shiftLocations:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif