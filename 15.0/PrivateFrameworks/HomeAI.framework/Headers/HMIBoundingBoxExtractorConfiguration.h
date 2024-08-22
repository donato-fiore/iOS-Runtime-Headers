// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIBOUNDINGBOXEXTRACTORCONFIGURATION_H
#define HMIBOUNDINGBOXEXTRACTORCONFIGURATION_H

@class HMFObject;



@interface HMIBoundingBoxExtractorConfiguration : HMFObject

@property (readonly) float maxBoxSizeFinal; // ivar: _maxBoxSizeFinal
@property (readonly) float maxBoxSizePostMerge; // ivar: _maxBoxSizePostMerge
@property (readonly) float maxBoxSizePreMerge; // ivar: _maxBoxSizePreMerge
@property (readonly) float minBoxSizeFinal; // ivar: _minBoxSizeFinal
@property (readonly) float minBoxSizePreMerge; // ivar: _minBoxSizePreMerge
@property (readonly) float overlapThreshold; // ivar: _overlapThreshold
@property (readonly) float scalePreMerge; // ivar: _scalePreMerge


+(id)defaultConfiguration;
-(id)initWithOverlapThreshold:(float)arg0 scalePreMerge:(float)arg1 minBoxSizePreMerge:(float)arg2 maxBoxSizePreMerge:(float)arg3 maxBoxSizePostMerge:(float)arg4 minBoxSizeFinal:(float)arg5 maxBoxSizeFinal:(float)arg6 ;


@end


#endif