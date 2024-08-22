// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMLOCATIONSHIFTER_H
#define FMLOCATIONSHIFTER_H

@class GEOLocationShifter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface FMLocationShifter : NSObject

@property (retain, nonatomic) GEOLocationShifter *locationShifter; // ivar: _locationShifter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


-(BOOL)isLocationShiftRequiredForItem:(id)arg0 ;
-(BOOL)isLocationShiftRequiredForItems:(id)arg0 ;
-(id)init;
-(id)shiftLocation:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)shiftLocations:(id)arg0 timeout:(CGFloat)arg1 ;
// -(void)shiftLocation:(id)arg0 withCompletionHandler:(id)arg1 callbackQueue:(unk)arg2  ;
// -(void)shiftLocations:(id)arg0 withCompletionHandler:(id)arg1 callbackQueue:(unk)arg2  ;


@end


#endif