// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMISTOREFACECROPOPERATION_H
#define HMISTOREFACECROPOPERATION_H

@class HMFOperation;
@protocol HMIHomePersonManagerDataSource;


#import "HMIFaceCrop.h"

@interface HMIStoreFaceCropOperation : HMFOperation

@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) HMIFaceCrop *faceCrop; // ivar: _faceCrop


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 faceCrop:(id)arg1 ;
-(void)main;


@end


#endif