// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VEKSONG_H
#define VEKSONG_H

@class NSString, NSSet, MPMediaItem;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FMSong.h"

@interface VEKSong : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *artworkPath;
@property (retain, nonatomic) FMSong *fmSong; // ivar: _fmSong
@property (readonly, nonatomic) NSSet *genres;
@property (nonatomic) NSUInteger iTunesID; // ivar: _iTunesID
@property (retain, nonatomic) MPMediaItem *iTunesMediaItem; // ivar: _iTunesMediaItem
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isSmartMusic;
@property (readonly, nonatomic) BOOL isiTunesMusic;
@property (readonly, nonatomic) NSInteger mood;
@property (readonly, nonatomic) id *songID;
@property (readonly, nonatomic) NSString *songName;


+(id)availableSmartSongs;
+(id)featuredSmartSongsForMood:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)moodForMoodString:(id)arg0 ;
-(NSUInteger)hash;
-(id)_fetchMediaItemForMediaID:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fetchSmartSongArtwork;
-(id)initWithSmartMusicID:(id)arg0 ;
-(id)initWithiTunesMusicID:(NSUInteger)arg0 ;
-(id)previewPlayerItemForDuration:(struct ? )arg0 normalizedVolume:(*CGFloat)arg1 ;


@end


#endif