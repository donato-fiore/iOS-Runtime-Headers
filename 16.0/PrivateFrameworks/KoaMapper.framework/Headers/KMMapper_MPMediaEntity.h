// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMMAPPER_MPMEDIAENTITY_H
#define KMMAPPER_MPMEDIAENTITY_H

@class KVItemBuilder, NSMutableArray, NSString;
@protocol KMMapper;

#import <Foundation/Foundation.h>


@interface KMMapper_MPMediaEntity : NSObject <KMMapper>

 {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)externalObjectClass;
-(BOOL)_addItemWithItemId:(id)arg0 itemIdType:(NSInteger)arg1 fields:(id)arg2 error:(*id)arg3 ;
-(BOOL)_itemsFromMediaItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_itemsFromMediaPlaylist:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mapAudioBookItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mapMovieItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mapMusicItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mapMusicVideoItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mapPodcastItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mapTVShowItem:(id)arg0 error:(*id)arg1 ;
-(NSInteger)targetItemType;
-(id)init;
-(id)itemsFromExternalObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;


@end


#endif