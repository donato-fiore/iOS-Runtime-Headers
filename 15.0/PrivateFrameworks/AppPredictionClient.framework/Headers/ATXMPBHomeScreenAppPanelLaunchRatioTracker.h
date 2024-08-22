// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMPBHOMESCREENAPPPANELLAUNCHRATIOTRACKER_H
#define ATXMPBHOMESCREENAPPPANELLAUNCHRATIOTRACKER_H

@class PBCodable;
@protocol NSCopying;



@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasRatioType;
@property (nonatomic) int location; // ivar: _location
@property (nonatomic) int ratioType; // ivar: _ratioType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationAsString:(int)arg0 ;
-(id)ratioTypeAsString:(int)arg0 ;
-(int)StringAsLocation:(id)arg0 ;
-(int)StringAsRatioType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif