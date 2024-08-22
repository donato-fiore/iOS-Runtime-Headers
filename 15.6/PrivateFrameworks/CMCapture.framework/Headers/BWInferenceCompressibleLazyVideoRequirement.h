// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCECOMPRESSIBLELAZYVIDEOREQUIREMENT_H
#define BWINFERENCECOMPRESSIBLELAZYVIDEOREQUIREMENT_H



#import "BWInferenceLazyVideoRequirement.h"

@interface BWInferenceCompressibleLazyVideoRequirement : BWInferenceLazyVideoRequirement {
    BWInferenceLazyVideoRequirement *_underlyingLazyVideoRequirement;
}




-(id)initWithAttachedMediaKey:(id)arg0 preparedByAttachedMediaKey:(id)arg1 count:(NSUInteger)arg2 videoFormatProvider:(id)arg3 ;
-(id)initWithLazyVideoRequirement:(id)arg0 ;
-(int)prepareForInputInferenceVideoFormat:(id)arg0 ;
-(void)dealloc;


@end


#endif