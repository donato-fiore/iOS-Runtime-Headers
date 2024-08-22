// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIPPODCAST_H
#define MIPPODCAST_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MIPArtist.h"
#import "MIPSeries.h"

@interface MIPPodcast : PBCodable <NSCopying>



@property (retain, nonatomic) MIPArtist *artist; // ivar: _artist
@property (retain, nonatomic) NSString *externalGuid; // ivar: _externalGuid
@property (retain, nonatomic) NSString *feedUrl; // ivar: _feedUrl
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasExternalGuid;
@property (readonly, nonatomic) BOOL hasFeedUrl;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPSeries *series; // ivar: _series


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif