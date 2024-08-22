// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWIRISSTILLIMAGEMOVIEMETADATACACHE_H
#define BWIRISSTILLIMAGEMOVIEMETADATACACHE_H



#import "BWSimpleCache.h"

@interface BWIrisStillImageMovieMetadataCache : BWSimpleCache



-(id)copyAndClearStillImageTransformDataForSettingsID:(id)arg0 ;
-(void)cacheStillImageTransformDataFromMetadata:(id)arg0 transformReferenceDimensions:(struct ? )arg1 ;
-(void)cacheStillImageVideoToPhotoTransform:(id)arg0 forSettingsID:(id)arg1 ;


@end


#endif