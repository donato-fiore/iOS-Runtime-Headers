// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACCMEDIALIBRARYUPDATEITEM_H
#define ACCMEDIALIBRARYUPDATEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ACCMediaLibraryUpdateItem : NSObject

@property (retain, nonatomic) NSString *albumArtist; // ivar: _albumArtist
@property (nonatomic) NSUInteger albumArtistPersistentID; // ivar: _albumArtistPersistentID
@property (nonatomic) unsigned short albumDiscCount; // ivar: _albumDiscCount
@property (nonatomic) unsigned short albumDiscNumber; // ivar: _albumDiscNumber
@property (nonatomic) NSUInteger albumPersistentID; // ivar: _albumPersistentID
@property (retain, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (nonatomic) unsigned short albumTrackCount; // ivar: _albumTrackCount
@property (nonatomic) unsigned short albumTrackNumber; // ivar: _albumTrackNumber
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (nonatomic) NSUInteger artistPersistentID; // ivar: _artistPersistentID
@property (nonatomic) unsigned short chapterCount; // ivar: _chapterCount
@property (retain, nonatomic) NSString *composer; // ivar: _composer
@property (nonatomic) NSUInteger composerPersistentID; // ivar: _composerPersistentID
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (retain, nonatomic) NSString *genre; // ivar: _genre
@property (nonatomic) NSUInteger genrePersistentID; // ivar: _genrePersistentID
@property (nonatomic) BOOL local; // ivar: _local
@property (retain, nonatomic) NSString *mediaLibraryUID; // ivar: _mediaLibraryUID
@property (nonatomic) BOOL partOfCompilation; // ivar: _partOfCompilation
@property (nonatomic) NSUInteger persistentID; // ivar: _persistentID
@property (nonatomic) int rating; // ivar: _rating
@property (retain, nonatomic) NSString *revision; // ivar: _revision
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSUInteger validMask; // ivar: _validMask


-(id)copyDict;
-(id)debugDescription;
-(id)description;
-(id)initWithMediaLibrary:(id)arg0 dict:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg0 persistentID:(NSUInteger)arg1 revision:(id)arg2 ;
-(void)fillStruct:(struct ? *)arg0 ;


@end


#endif