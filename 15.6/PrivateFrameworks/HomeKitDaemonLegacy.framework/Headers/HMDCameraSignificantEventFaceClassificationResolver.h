// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASIGNIFICANTEVENTFACECLASSIFICATIONRESOLVER_H
#define HMDCAMERASIGNIFICANTEVENTFACECLASSIFICATIONRESOLVER_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDHome.h"

@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_faceClassificationForSignificantEventFaceClassifications:(id)arg0 user:(id)arg1 ;
-(id)faceClassificationForSignificantEventFaceClassifications:(id)arg0 ;
-(id)faceClassificationForSignificantEventFaceClassifications:(id)arg0 user:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)logIdentifier;
-(id)personManagerWithUUID:(id)arg0 ;


@end


#endif