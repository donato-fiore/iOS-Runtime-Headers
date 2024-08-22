// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMITORSOCLASSIFIER_H
#define HMITORSOCLASSIFIER_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMITorsoprinter.h"

@interface HMITorsoClassifier : HMFObject <HMFLogging>



@property (readonly) CGFloat classificationThresholdKnown; // ivar: _classificationThresholdKnown
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) HMITorsoprinter *torsoprinter; // ivar: _torsoprinter


+(id)logCategory;
-(id)classifyTorsoEvent:(id)arg0 regionOfInterest:(struct CGRect )arg1 pixelBuffer:(struct __CVBuffer *)arg2 homeUUID:(id)arg3 error:(*id)arg4 ;
-(id)init;


@end


#endif