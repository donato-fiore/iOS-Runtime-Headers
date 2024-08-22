// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMUSICMAESTROWRAPPER_H
#define PGMUSICMAESTROWRAPPER_H


#import <Foundation/Foundation.h>


@interface PGMusicMaestroWrapper : NSObject



+(id)curateMusicForNormalizedKeywordsByAssetCollectionLocalIdentifier:(id)arg0 keywordsByAdamID:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(id)curateMusicForNormalizedSupportedKeywordsByAssetCollectionLocalIdentifier:(id)arg0 keywordsByAdamID:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif