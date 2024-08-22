// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIREMOVEFACEPRINTSOPERATION_H
#define HMIREMOVEFACEPRINTSOPERATION_H

@class HMFOperation, NSSet;
@protocol HMIPersonManagerDataSource;



@interface HMIRemoveFaceprintsOperation : HMFOperation

@property (readonly) NSObject<HMIPersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSSet *faceprintUUIDs; // ivar: _faceprintUUIDs


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 faceprintUUIDs:(id)arg1 ;
-(void)main;
-(void)mainInsideAutoreleasePool;


@end


#endif