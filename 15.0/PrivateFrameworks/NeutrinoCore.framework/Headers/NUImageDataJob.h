// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGEDATAJOB_H
#define NUIMAGEDATAJOB_H

@class NSDictionary;


#import "NURenderJob.h"

@interface NUImageDataJob : NURenderJob {
    NSDictionary *_data;
}




-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)cacheKey;
-(id)extractDataToDictionary:(id)arg0 bounds:(struct ? )arg1 dataExtractor:(id)arg2 options:(id)arg3 colorSpace:(struct CGColorSpace *)arg4 error:(*id)arg5 ;
-(id)requestOptions;
-(id)result;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif