// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIDESDATASET_H
#define HMIDESDATASET_H

@class HMFObject, NSString, NSArray;
@protocol HMFLogging;



@interface HMIDESDataset : HMFObject <HMFLogging>



@property (readonly) NSString *boxesName; // ivar: _boxesName
@property (readonly) NSString *classesName; // ivar: _classesName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *imageName; // ivar: _imageName
@property (readonly) NSArray *samples; // ivar: _samples
@property (readonly) Class superclass;
@property (readonly) NSString *weightsName; // ivar: _weightsName


+(id)logCategory;
-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithSamples:(id)arg0 imageName:(id)arg1 boxesName:(id)arg2 weightsName:(id)arg3 classesName:(id)arg4 ;


@end


#endif