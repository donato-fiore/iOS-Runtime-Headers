// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCMEDIALIBRARYUPDATEPLAYLIST_H
#define ACCMEDIALIBRARYUPDATEPLAYLIST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ACCMediaLibraryUpdatePlaylistContent.h"

@interface ACCMediaLibraryUpdatePlaylist : NSObject

@property (retain, nonatomic) ACCMediaLibraryUpdatePlaylistContent *content; // ivar: _content
@property (nonatomic) int contentStyle; // ivar: _contentStyle
@property (nonatomic) BOOL folder; // ivar: _folder
@property (nonatomic) BOOL geniusMix; // ivar: _geniusMix
@property (retain, nonatomic) NSString *mediaLibraryUID; // ivar: _mediaLibraryUID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger parentPersistentID; // ivar: _parentPersistentID
@property (nonatomic) NSUInteger persistentID; // ivar: _persistentID
@property (nonatomic) BOOL radioStation; // ivar: _radioStation
@property (nonatomic) unsigned short radioStationOrdering; // ivar: _radioStationOrdering
@property (retain, nonatomic) NSString *revision; // ivar: _revision
@property (nonatomic) BOOL smartPlaylist; // ivar: _smartPlaylist
@property (readonly, nonatomic) NSUInteger validMask; // ivar: _validMask


-(id)copyDict;
-(id)debugDescription;
-(id)description;
-(id)initWithMediaLibrary:(id)arg0 dict:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg0 persistentID:(NSUInteger)arg1 revision:(id)arg2 ;
-(void)fillStruct:(struct ? *)arg0 ;


@end


#endif