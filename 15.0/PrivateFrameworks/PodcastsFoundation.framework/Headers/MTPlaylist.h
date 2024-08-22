// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPLAYLIST_H
#define MTPLAYLIST_H

@class NSManagedObject, NSSet, NSOrderedSet, NSString;


#import "MTPodcastPlaylistSettings.h"
#import "MTSyncInfo.h"

@interface MTPlaylist : NSManagedObject

@property (retain, nonatomic) NSSet *addedEpisodes;
@property (nonatomic) int containerOrder;
@property (retain, nonatomic) MTPodcastPlaylistSettings *defaultSettings;
@property (retain, nonatomic) NSSet *deletedEpisodes;
@property (nonatomic) NSInteger downloadedCount;
@property (retain, nonatomic) NSOrderedSet *episodes;
@property (nonatomic) NSInteger flags;
@property (nonatomic) CGFloat generatedDate;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isITunesPlaylist;
@property (nonatomic) NSInteger mediaLibraryId;
@property (nonatomic) NSInteger parentMediaLibraryId;
@property (retain, nonatomic) NSOrderedSet *podcasts;
@property (retain, nonatomic) NSOrderedSet *settings;
@property (nonatomic) NSInteger sortOrder;
@property (retain, nonatomic) MTSyncInfo *syncInfo;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) NSInteger unplayedCount;
@property (nonatomic) CGFloat updatedDate;
@property (retain, nonatomic) NSString *uuid;


+(id)predicateForIsHidden:(BOOL)arg0 ;
+(id)sortDescriptors;
+(id)topLevelPlaylistsPredicate;
-(BOOL)needsUpdate;
-(NSInteger)mt_syncID;
-(void)setNeedsUpdate:(BOOL)arg0 ;


@end


#endif