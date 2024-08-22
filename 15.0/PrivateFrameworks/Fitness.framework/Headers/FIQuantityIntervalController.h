// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIQUANTITYINTERVALCONTROLLER_H
#define FIQUANTITYINTERVALCONTROLLER_H

@class NSDate;
@protocol FIIntervalController;

#import <Foundation/Foundation.h>

#import "FIIntervalQuantityTrigger.h"
#import "FIMutableTimeSliceGroup.h"

@interface FIQuantityIntervalController : NSObject <FIIntervalController>

 {
    FIIntervalQuantityTrigger *_quantityTrigger;
    FIMutableTimeSliceGroup *_sliceGroup;
}


@property (readonly, nonatomic) BOOL allSlicesFinalized;
@property (readonly, nonatomic) BOOL intervalComplete;
@property (readonly, nonatomic) NSDate *intervalEndDate;


-(BOOL)_updateTriggerWithSample:(id)arg0 ;
-(BOOL)isIntervalEndDate;
-(id)initWithIntervalQuantityType:(id)arg0 threshold:(id)arg1 startDate:(id)arg2 trackedQuantityTypes:(id)arg3 ;
-(void)addSample:(id)arg0 ;


@end


#endif