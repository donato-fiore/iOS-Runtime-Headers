// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMELOCATIONEVENT_H
#define HMDHOMELOCATIONEVENT_H

@class HMMLogEvent, NSString, CLLocation, NSArray;
@protocol HMDAWDLogEvent;



@interface HMDHomeLocationEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *nearestLOI; // ivar: _nearestLOI
@property (nonatomic) NSUInteger numOfIterations; // ivar: _numOfIterations
@property (retain, nonatomic) CLLocation *selectedHomeLocation; // ivar: _selectedHomeLocation
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tuples; // ivar: _tuples


+(id)eventWithLocationTuples:(id)arg0 selectedHomeLocation:(id)arg1 numberOfIterations:(NSUInteger)arg2 nearestLOI:(id)arg3 ;
-(id)awdLocationFromLocationTuple:(id)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif