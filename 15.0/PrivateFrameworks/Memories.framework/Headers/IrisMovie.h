// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IRISMOVIE_H
#define IRISMOVIE_H



#import "VideoMovie.h"

@interface IrisMovie : VideoMovie

@property (nonatomic) ? cachedPreciseAssetStart; // ivar: _cachedPreciseAssetStart
@property (readonly, nonatomic) BOOL front;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifierURL:(id)arg0 asset:(id)arg1 front:(BOOL)arg2 ;
-(int)duration;
-(struct ? )startTime;
-(void)cacheVideoTrackInformationOfAsset:(id)arg0 ;


@end


#endif