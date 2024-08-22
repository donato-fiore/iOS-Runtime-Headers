// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSCOREPROFILES_H
#define NTPBSCOREPROFILES_H

@class PBCodable;
@protocol NSCopying;


#import "NTPBScoreProfile.h"

@interface NTPBScoreProfiles : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBScoreProfile *defaultScoreProfile; // ivar: _defaultScoreProfile
@property (retain, nonatomic) NTPBScoreProfile *forYouGroupScoreProfile; // ivar: _forYouGroupScoreProfile
@property (readonly, nonatomic) BOOL hasDefaultScoreProfile;
@property (readonly, nonatomic) BOOL hasForYouGroupScoreProfile;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif