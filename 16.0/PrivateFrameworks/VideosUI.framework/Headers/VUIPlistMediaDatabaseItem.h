// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTMEDIADATABASEITEM_H
#define VUIPLISTMEDIADATABASEITEM_H

@class NSNumber, VUIContentRating, NSString, NSURL, NSDictionary, NSDate;
@protocol NSCopying;


#import "VUIPlistMediaDatabaseEntity.h"
#import "VUIMediaItemCredits.h"
#import "VUIPlistMediaDatabaseSeason.h"

@interface VUIPlistMediaDatabaseItem : VUIPlistMediaDatabaseEntity <NSCopying>

 {
    NSNumber *_local;
}


@property (copy, nonatomic) NSNumber *HLSColorCapability; // ivar: _HLSColorCapability
@property (copy, nonatomic) NSNumber *colorCapability; // ivar: _colorCapability
@property (copy, nonatomic) VUIContentRating *contentRating; // ivar: _contentRating
@property (copy, nonatomic) VUIMediaItemCredits *credits; // ivar: _credits
@property (copy, nonatomic) NSString *downloadState; // ivar: _downloadState
@property (copy, nonatomic) NSNumber *duration; // ivar: _duration
@property (copy, nonatomic) NSNumber *episodeNumber; // ivar: _episodeNumber
@property (copy, nonatomic) NSURL *filePathURL; // ivar: _filePathURL
@property (copy, nonatomic) NSDictionary *offlineFPSKeys; // ivar: _offlineFPSKeys
@property (readonly, copy, nonatomic, getter=isPlayable) NSNumber *playable;
@property (copy, nonatomic) NSURL *playbackURL; // ivar: _playbackURL
@property (copy, nonatomic) NSURL *previewFrameURL; // ivar: _previewFrameURL
@property (copy, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (weak, nonatomic) VUIPlistMediaDatabaseSeason *season; // ivar: _season
@property (copy, nonatomic) NSString *studio; // ivar: _studio


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)isLocal;


@end


#endif