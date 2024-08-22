// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMUSICCURATIONRECENTLYUSEDSONGS_H
#define PGMUSICCURATIONRECENTLYUSEDSONGS_H


#import <Foundation/Foundation.h>


@interface PGMusicCurationRecentlyUsedSongs : NSObject {
    ? mostRecentlyUsedSongIDDateMap;
}




-(id)init;
-(void)addSongIDs:(id)arg0 date:(id)arg1 ;
-(void)addWithSongIDDateMap:(id)arg0 ;


@end


#endif