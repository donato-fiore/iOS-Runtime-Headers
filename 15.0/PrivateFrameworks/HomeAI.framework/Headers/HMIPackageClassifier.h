// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPACKAGECLASSIFIER_H
#define HMIPACKAGECLASSIFIER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIPackageClassifier : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGSize inputSize; // ivar: _inputSize
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedModel;
-(id)initWithError:(*id)arg0 ;
-(id)predictWithPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;


@end


#endif