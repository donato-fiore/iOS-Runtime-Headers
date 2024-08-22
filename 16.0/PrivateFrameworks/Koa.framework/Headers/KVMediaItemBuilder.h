// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVMEDIAITEMBUILDER_H
#define KVMEDIAITEMBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "KVItemBuilder.h"

@interface KVMediaItemBuilder : NSObject {
    KVItemBuilder *_builder;
    NSMutableArray *_fields;
}




+(void)initialize;
-(id)_buildMediaItemWithId:(id)arg0 otherFields:(id)arg1 ;
-(id)albumArtistItemWithName:(id)arg0 itemId:(id)arg1 ;
-(id)albumItemWithName:(id)arg0 itemId:(id)arg1 albumArtistId:(id)arg2 ;
-(id)audioBookArtistItemWithName:(id)arg0 itemId:(id)arg1 ;
-(id)audioBookItemWithName:(id)arg0 itemId:(id)arg1 artistId:(id)arg2 ;
-(id)genreItemWithName:(id)arg0 itemId:(id)arg1 ;
-(id)init;
-(id)movieItemWithName:(id)arg0 itemId:(id)arg1 ;
-(id)musicVideoItemWithName:(id)arg0 itemId:(id)arg1 albumArtistId:(id)arg2 songArtistId:(id)arg3 albumId:(id)arg4 genreId:(id)arg5 ;
-(id)playlistItemWithName:(id)arg0 itemId:(id)arg1 ;
-(id)songArtistItemWithName:(id)arg0 itemId:(id)arg1 ;
-(id)songItemWithName:(id)arg0 itemId:(id)arg1 albumArtistId:(id)arg2 songArtistId:(id)arg3 albumId:(id)arg4 genreId:(id)arg5 ;
-(id)tvEpisodeItemWithName:(id)arg0 itemId:(id)arg1 showId:(id)arg2 ;
-(id)tvShowItemWithName:(id)arg0 itemId:(id)arg1 ;


@end


#endif