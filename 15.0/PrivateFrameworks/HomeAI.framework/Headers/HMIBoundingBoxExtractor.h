// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIBOUNDINGBOXEXTRACTOR_H
#define HMIBOUNDINGBOXEXTRACTOR_H

@class HMFObject, CIContext;


#import "HMIBoundingBoxExtractorConfiguration.h"

@interface HMIBoundingBoxExtractor : HMFObject

@property (readonly) CIContext *ciContext; // ivar: _ciContext
@property (readonly) HMIBoundingBoxExtractorConfiguration *config; // ivar: _config


+(BOOL)isValidBox:(struct CGRect )arg0 minSize:(float)arg1 maxSize:(float)arg2 imageSize:(struct CGSize )arg3 ;
+(id)mergedBoxes:(id)arg0 overlapThreshold:(float)arg1 minSize:(float)arg2 maxSize:(float)arg3 imageSize:(struct CGSize )arg4 ;
+(id)scaledBoxes:(id)arg0 scale:(float)arg1 ;
+(id)squaredBoxes:(id)arg0 ;
+(id)validBoxes:(id)arg0 minSize:(float)arg1 maxSize:(float)arg2 imageSize:(struct CGSize )arg3 ;
+(struct CGRect )squaredBox:(struct CGRect )arg0 ;
-(id)boxesFromRawBoxes:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)boxesInFloodFillImage:(id)arg0 ;
-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(id)rawBoxesInFloodFillImage:(id)arg0 ;


@end


#endif