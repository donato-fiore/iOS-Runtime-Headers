// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPLAYERMANIFEST_H
#define PKPLAYERMANIFEST_H


#import <Foundation/Foundation.h>


@interface PKPlayerManifest : NSObject {
    ? playableContent;
    ? assetInfo;
    ? siriContext;
}




+(id)manifestForEpisode:(id)arg0 ;
+(id)manifestForEpisodeStoreId:(id)arg0 assetInfo:(id)arg1 ;
+(id)manifestForEpisodeStoreId:(id)arg0 siriContext:(id)arg1 ;
+(id)manifestForPlayMyPodcastsWithSiriContext:(id)arg0 ;
+(id)manifestForShow:(id)arg0 ;
+(id)manifestForShowStoreId:(id)arg0 assetInfo:(id)arg1 ;
+(id)manifestForShowStoreId:(id)arg0 siriContext:(id)arg1 ;
+(id)manifestForShowUuid:(id)arg0 siriContext:(id)arg1 ;
+(id)manifestForStationId:(id)arg0 siriContext:(id)arg1 ;
-(id)init;


@end


#endif