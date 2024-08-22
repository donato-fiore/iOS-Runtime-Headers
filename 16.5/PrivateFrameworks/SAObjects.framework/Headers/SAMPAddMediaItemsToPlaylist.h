// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPADDMEDIAITEMSTOPLAYLIST_H
#define SAMPADDMEDIAITEMSTOPLAYLIST_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"
#import "SAMPPlaylist.h"

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (copy, nonatomic) NSString *insertLocation;
@property (copy, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) SAMPPlaylist *playlist;


+(id)addMediaItemsToPlaylist;
+(id)addMediaItemsToPlaylistWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif