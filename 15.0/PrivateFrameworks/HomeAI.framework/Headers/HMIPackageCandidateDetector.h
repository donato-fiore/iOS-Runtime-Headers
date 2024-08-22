// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPACKAGECANDIDATEDETECTOR_H
#define HMIPACKAGECANDIDATEDETECTOR_H

@class HMFObject, CIContext, CIImage;


#import "HMIBoundingBoxExtractor.h"
#import "HMIPackageCandidateDetectorConfiguration.h"
#import "HMIAverageImage.h"

@interface HMIPackageCandidateDetector : HMFObject

@property (readonly) HMIBoundingBoxExtractor *boxExtractor; // ivar: _boxExtractor
@property (readonly) HMIPackageCandidateDetectorConfiguration *config; // ivar: _config
@property (readonly) CIContext *context; // ivar: _context
@property (readonly) CIImage *referenceImage; // ivar: _referenceImage
@property (readonly) HMIAverageImage *temporalAverageImage; // ivar: _temporalAverageImage


-(BOOL)updateWithFrame:(id)arg0 ;
-(id)detectedPackageCandidates;
-(id)initWithReferenceImage:(id)arg0 config:(id)arg1 ;


@end


#endif