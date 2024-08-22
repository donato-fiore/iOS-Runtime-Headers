// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLMEDIAITEMUTILS_H
#define BLMEDIAITEMUTILS_H


#import <Foundation/Foundation.h>


@interface BLMediaItemUtils : NSObject



+(NSUInteger)bitrateForItem:(id)arg0 ;
+(id)hlsOfflinePlaybackKeysForItem:(id)arg0 ;
+(void)addPersistHLSOfflinePlaybackKey:(id)arg0 forUri:(id)arg1 toItem:(id)arg2 ;
+(void)clearPersistHLSOfflinePlaybackKeysFromItem:(id)arg0 ;
+(void)removePersistHLSOfflinePlaybackKeyForUri:(id)arg0 fromItem:(id)arg1 ;
+(void)setBitrate:(NSUInteger)arg0 forItem:(id)arg1 ;


@end


#endif