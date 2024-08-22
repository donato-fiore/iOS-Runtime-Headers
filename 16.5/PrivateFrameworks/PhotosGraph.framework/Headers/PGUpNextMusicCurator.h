// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGUPNEXTMUSICCURATOR_H
#define PGUPNEXTMUSICCURATOR_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGUpNextMusicCurator : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _isAppleMusicSubscriber;
}




+(id)_appleMusicCurationWithFeaturesByMemory:(id)arg0 musicCuratorContext:(id)arg1 managerContext:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
+(id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)_flexMusicCurationForMemories:(id)arg0 musicCurationOptions:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(id)_musicCurationFeaturesForMemories:(id)arg0 musicCuratorContext:(id)arg1 managerContext:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
+(id)_photosGraphPropertiesForMemory:(id)arg0 musicCurationFeatures:(id)arg1 appleMusicCuration:(id)arg2 flexMusicCuration:(id)arg3 isAppleMusicSubscriber:(BOOL)arg4 error:(*id)arg5 ;
-(BOOL)curateMusicForUpNextMemoriesWithLocalIdentifiers:(id)arg0 musicCurationOptions:(id)arg1 photoLibrary:(id)arg2 managerContext:(id)arg3 error:(*id)arg4 ;
-(id)initWithLoggingConnection:(id)arg0 ;


@end


#endif