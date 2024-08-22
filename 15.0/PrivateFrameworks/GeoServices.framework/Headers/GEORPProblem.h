// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPROBLEM_H
#define GEORPPROBLEM_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORPProblemContext.h"
#import "GEORPProblemCorrections.h"

@interface GEORPProblem : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _problemType;
    unsigned int _protocolVersion;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasProblemContext;
@property (readonly, nonatomic) BOOL hasProblemCorrections;
@property (nonatomic) BOOL hasProblemType;
@property (nonatomic) BOOL hasProtocolVersion;
@property (retain, nonatomic) GEORPProblemContext *problemContext;
@property (retain, nonatomic) GEORPProblemCorrections *problemCorrections;
@property (nonatomic) int problemType;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) *int userPaths;
@property (readonly, nonatomic) NSUInteger userPathsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)problemTypeAsString:(int)arg0 ;
-(id)userPathsAsString:(int)arg0 ;
-(int)StringAsProblemType:(id)arg0 ;
-(int)StringAsUserPaths:(id)arg0 ;
-(int)userPathAtIndex:(NSUInteger)arg0 ;
-(void)addUserPath:(int)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUserPaths;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif