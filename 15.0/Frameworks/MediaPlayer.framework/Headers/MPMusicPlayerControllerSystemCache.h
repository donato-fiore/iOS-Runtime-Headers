// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMUSICPLAYERCONTROLLERSYSTEMCACHE_H
#define MPMUSICPLAYERCONTROLLERSYSTEMCACHE_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>

#import "MPMusicPlayerControllerNowPlaying.h"
#import "MPMusicPlayerQueueDescriptor.h"

@interface MPMusicPlayerControllerSystemCache : NSObject {
    NSUserDefaults *_defaults;
}


@property (readonly, nonatomic) BOOL hasCachedData;
@property (retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;


+(id)sharedCache;
-(BOOL)_saveObject:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)_init;
-(id)_objectOfClass:(Class)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(void)clearCache;


@end


#endif