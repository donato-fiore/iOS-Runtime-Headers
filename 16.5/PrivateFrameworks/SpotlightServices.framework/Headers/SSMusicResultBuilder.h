// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMUSICRESULTBUILDER_H
#define SSMUSICRESULTBUILDER_H

@class NSString, NSDate, NSNumber;


#import "SSResultBuilder.h"

@interface SSMusicResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *mediaId; // ivar: _mediaId
@property (retain, nonatomic) NSString *song; // ivar: _song
@property (retain, nonatomic) NSNumber *songLengthInSeconds; // ivar: _songLengthInSeconds


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
+(id)stringWithAlbum:(id)arg0 releaseDate:(id)arg1 ;
-(id)buildCompactCardSection;
-(id)buildDescriptions;
-(id)buildFootnote;
-(id)buildResult;
-(id)buildThumbnail;
-(id)buildTitle;
-(id)initWithResult:(id)arg0 ;


@end


#endif