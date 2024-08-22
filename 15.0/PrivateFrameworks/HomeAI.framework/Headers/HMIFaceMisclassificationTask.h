// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIFACEMISCLASSIFICATIONTASK_H
#define HMIFACEMISCLASSIFICATIONTASK_H

@protocol HMIHomePersonManagerDataSource;


#import "HMITask.h"
#import "HMIPersonFaceCrop.h"

@interface HMIFaceMisclassificationTask : HMITask

@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) HMIPersonFaceCrop *faceCrop; // ivar: _faceCrop


+(id)logCategory;
-(id)initWithTaskID:(int)arg0 dataSource:(id)arg1 faceCrop:(id)arg2 ;
-(void)main;
-(void)removeNearestFaceprint:(id)arg0 withFaceCrops:(id)arg1 ;


@end


#endif