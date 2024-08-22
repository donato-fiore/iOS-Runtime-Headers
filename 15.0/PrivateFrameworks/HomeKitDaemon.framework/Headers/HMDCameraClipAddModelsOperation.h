// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPADDMODELSOPERATION_H
#define HMDCAMERACLIPADDMODELSOPERATION_H

@class NSString, NSSet;
@protocol HMBLocalZoneMirrorOutputObserver;


#import "HMDCameraClipOperation.h"

@interface HMDCameraClipAddModelsOperation : HMDCameraClipOperation <HMBLocalZoneMirrorOutputObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSSet *modelsToAdd;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)localZone:(id)arg0 willPerformMirrorOutputForModel:(id)arg1 ;
-(void)main;
-(void)updateMirrorOutputModel:(id)arg0 ;


@end


#endif