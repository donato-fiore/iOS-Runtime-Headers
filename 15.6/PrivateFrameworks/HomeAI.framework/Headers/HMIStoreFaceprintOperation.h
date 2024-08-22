// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMISTOREFACEPRINTOPERATION_H
#define HMISTOREFACEPRINTOPERATION_H

@class HMFOperation;
@protocol HMIHomePersonManagerDataSource;


#import "HMIFaceprint.h"

@interface HMIStoreFaceprintOperation : HMFOperation

@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) HMIFaceprint *faceprint; // ivar: _faceprint


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 faceprint:(id)arg1 ;
-(void)main;


@end


#endif