// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKVIDEOPLAYERSINGLEVIDEODATASOURCE_H
#define NTKVIDEOPLAYERSINGLEVIDEODATASOURCE_H



#import "NTKVideoPlayerDataSource.h"
#import "NTKVideoPlayerListing.h"

@interface NTKVideoPlayerSingleVideoDataSource : NTKVideoPlayerDataSource {
    NTKVideoPlayerListing *_listing;
}




+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 andListing:(id)arg2 ;
+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 endBehavior:(NSUInteger)arg2 andFilename:(id)arg3 ;
-(id)currentListing;
-(id)initForDevice:(id)arg0 listing:(id)arg1 posterImage:(id)arg2 ;


@end


#endif