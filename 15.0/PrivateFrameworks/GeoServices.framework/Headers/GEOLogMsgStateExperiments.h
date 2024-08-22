// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATEEXPERIMENTS_H
#define GEOLOGMSGSTATEEXPERIMENTS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOAbAssignInfo.h"
#import "GEOABClientConfig.h"
#import "GEOPDDatasetABStatus.h"
#import "GEOABExperimentAssignment.h"

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOAbAssignInfo *_abAssignInfo;
    GEOABClientConfig *_clientAbExperimentAssignment;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property (retain, nonatomic) GEOABClientConfig *clientAbExperimentAssignment;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (readonly, nonatomic) BOOL hasClientAbExperimentAssignment;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasTilesAbExperimentAssignment;
@property (retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;


+(BOOL)isValid:(id)arg0 ;
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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif