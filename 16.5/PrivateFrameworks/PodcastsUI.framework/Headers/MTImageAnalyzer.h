// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTIMAGEANALYZER_H
#define MTIMAGEANALYZER_H

@class MTSingleton, NSCache;



@interface MTImageAnalyzer : MTSingleton {
    NSCache *_memoryCache;
}




-(id)addImage:(id)arg0 forKey:(id)arg1 ;
-(id)colorThemeForArtwork:(id)arg0 ;
-(id)colorThemeForPodcastUuid:(id)arg0 ;
-(id)init;


@end


#endif