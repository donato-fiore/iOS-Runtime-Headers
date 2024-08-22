// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFLEXMUSICCURATOR_H
#define PGFLEXMUSICCURATOR_H


#import <Foundation/Foundation.h>


@interface PGFlexMusicCurator : NSObject



+(id)curateFlexMusicForMood:(NSUInteger)arg0 keywords:(id)arg1 recentlyUsedSongs:(id)arg2 entityUUID:(id)arg3 progressReporter:(id)arg4 error:(*id)arg5 ;
+(id)generateDebugInformationForAssetCollection:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
+(id)generateDebugInformationForSongWithUID:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif