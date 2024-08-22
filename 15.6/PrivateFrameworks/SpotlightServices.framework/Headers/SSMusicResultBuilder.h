// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMUSICRESULTBUILDER_H
#define SSMUSICRESULTBUILDER_H

@class NSString, NSDate, NSNumber;


#import "SSResultBuilder.h"

@interface SSMusicResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSDate *lastPlayedDate; // ivar: _lastPlayedDate
@property (retain, nonatomic) NSString *mediaId; // ivar: _mediaId
@property (retain, nonatomic) NSString *song; // ivar: _song
@property (retain, nonatomic) NSNumber *songLengthInSeconds; // ivar: _songLengthInSeconds


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
+(id)musicFootnoteStringWithReleaseDate:(id)arg0 songLengthInSeconds:(int)arg1 lastPlayedDate:(id)arg2 ;
+(id)stringWithArtist:(id)arg0 album:(id)arg1 ;
-(id)buildCompactCardSection;
-(id)buildInlineCardSection;
-(id)buildResult;
-(id)buildTitle;
-(id)initWithResult:(id)arg0 ;


@end


#endif