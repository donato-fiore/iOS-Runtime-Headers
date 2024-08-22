// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMISTOREFACEPRINTSOPERATION_H
#define HMISTOREFACEPRINTSOPERATION_H

@class HMFOperation, NSSet;
@protocol HMIPersonManagerDataSource;



@interface HMIStoreFaceprintsOperation : HMFOperation

@property (readonly) NSObject<HMIPersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSSet *faceprints; // ivar: _faceprints


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 faceprints:(id)arg1 ;
-(void)main;


@end


#endif