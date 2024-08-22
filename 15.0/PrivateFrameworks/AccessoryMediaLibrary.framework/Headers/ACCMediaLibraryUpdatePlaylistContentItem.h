// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCMEDIALIBRARYUPDATEPLAYLISTCONTENTITEM_H
#define ACCMEDIALIBRARYUPDATEPLAYLISTCONTENTITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject

@property (retain, nonatomic) NSString *albumArtist; // ivar: _albumArtist
@property (retain, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSString *composer; // ivar: _composer
@property (retain, nonatomic) NSString *genre; // ivar: _genre
@property (retain, nonatomic) NSString *mediaLibraryUID; // ivar: _mediaLibraryUID
@property (nonatomic) NSUInteger persistentID; // ivar: _persistentID
@property (nonatomic) NSUInteger playlistPersistentID; // ivar: _playlistPersistentID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger validMask; // ivar: _validMask


-(id)copyNSRepresentation:(int)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithMediaLibrary:(id)arg0 persistentID:(NSUInteger)arg1 playlistPersistentID:(NSUInteger)arg2 ;
-(id)initWithMediaLibrary:(id)arg0 playlistPersistentID:(NSUInteger)arg1 dict:(id)arg2 ;
-(void)fillStruct:(struct ? *)arg0 ;


@end


#endif