// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMUSICMAESTRO_H
#define PGMUSICMAESTRO_H


#import <Foundation/Foundation.h>


@interface PGMusicMaestro : NSObject



+(id)curateMusicForNormalizedKeywordsByAssetCollectionLocalIdentifier:(id)arg0 keywordsByAdamID:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(id)curateMusicForNormalizedSupportedKeywordsByAssetCollectionLocalIdentifier:(id)arg0 keywordsByAdamID:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;


@end


#endif