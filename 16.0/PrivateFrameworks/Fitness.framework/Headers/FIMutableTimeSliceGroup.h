// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIMUTABLETIMESLICEGROUP_H
#define FIMUTABLETIMESLICEGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FIMutableTimeSliceGroup : NSObject

@property (readonly, nonatomic) BOOL allSlicesFinalized;
@property (readonly, nonatomic) NSArray *slices; // ivar: _slices


+(id)timeSliceGroupForQuantityTypes:(id)arg0 startDate:(id)arg1 ;
-(id)initWithTimeSlices:(id)arg0 ;
-(void)commitAllSlicesToDate:(id)arg0 ;
-(void)updateSlicesWithEndDate:(id)arg0 ;
-(void)updateSlicesWithSample:(id)arg0 ;


@end


#endif