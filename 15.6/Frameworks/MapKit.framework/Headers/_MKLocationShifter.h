// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKLOCATIONSHIFTER_H
#define _MKLOCATIONSHIFTER_H

@class GEOLocationShifter;

#import <Foundation/Foundation.h>


@interface _MKLocationShifter : NSObject {
    GEOLocationShifter *_locationShifter;
}


@property (readonly, nonatomic, getter=isLocationShiftEnabled) BOOL locationShiftEnabled;


+(BOOL)isLocationShiftRequiredForLocation:(id)arg0 ;
-(id)init;
// -(void)_prepareShiftForLocation:(id)arg0 withCompletionHandler:(id)arg1 withShiftRequestBlock:(unk)arg2  ;
-(void)shiftLocation:(id)arg0 withCompletionHandler:(id)arg1 ;
// -(void)shiftLocation:(id)arg0 withCompletionHandler:(id)arg1 callbackQueue:(unk)arg2  ;


@end


#endif