// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONTRACKER_H
#define HMIPERSONTRACKER_H

@class HMFObject, NSString, NSMutableArray, NSDictionary, NSArray;
@protocol HMFLogging;



@interface HMIPersonTracker : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGSize frameDimensions; // ivar: _frameDimensions
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableArray *motionRecordsQueue; // ivar: _motionRecordsQueue
@property (retain) NSDictionary *previousPersonIndices; // ivar: _previousPersonIndices
@property (retain) NSArray *previousPersons; // ivar: _previousPersons
@property ? previousTime; // ivar: _previousTime
@property (readonly) Class superclass;


+(id)logCategory;
-(id)getUUIDToNextPersonIndexWithPreviousPersonIndex:(id)arg0 ;
-(id)initWithFrameDimensions:(struct CGSize )arg0 ;
-(id)trackNewPersons:(id)arg0 withMotionDetection:(id)arg1 atTime:(struct ? )arg2 ;
-(void)handleMotionDetections:(id)arg0 atTime:(struct ? )arg1 ;


@end


#endif