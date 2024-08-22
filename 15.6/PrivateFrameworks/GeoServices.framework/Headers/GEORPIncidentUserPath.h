// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPINCIDENTUSERPATH_H
#define GEORPINCIDENTUSERPATH_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPIncidentUserPath : PBCodable <NSCopying>

 {
    ? _userPaths;
    int _transportType;
    BOOL _navigationActive;
    BOOL _reportedFromCarplay;
    ? _flags;
}


@property (nonatomic) BOOL hasNavigationActive;
@property (nonatomic) BOOL hasReportedFromCarplay;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL navigationActive;
@property (nonatomic) BOOL reportedFromCarplay;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) *int userPaths;
@property (readonly, nonatomic) NSUInteger userPathsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)transportTypeAsString:(int)arg0 ;
-(id)userPathsAsString:(int)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(int)StringAsUserPaths:(id)arg0 ;
-(int)userPathAtIndex:(NSUInteger)arg0 ;
-(void)addUserPath:(int)arg0 ;
-(void)clearUserPaths;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif