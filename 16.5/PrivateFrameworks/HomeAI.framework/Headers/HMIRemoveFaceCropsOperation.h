// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIREMOVEFACECROPSOPERATION_H
#define HMIREMOVEFACECROPSOPERATION_H

@class HMFOperation, NSSet;
@protocol HMIHomePersonManagerDataSource;



@interface HMIRemoveFaceCropsOperation : HMFOperation

@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSSet *faceCropUUIDs; // ivar: _faceCropUUIDs


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 faceCropUUIDs:(id)arg1 ;
-(void)main;
-(void)mainInsideAutoreleasePool;


@end


#endif