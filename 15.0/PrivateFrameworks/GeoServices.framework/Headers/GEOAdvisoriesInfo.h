// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOADVISORIESINFO_H
#define GEOADVISORIESINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOClickableAdvisory.h"
#import "GEOAdvisoryNotice.h"

@interface GEOAdvisoriesInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOClickableAdvisory *_clickableAdvisory;
    GEOAdvisoryNotice *_evAdvisory;
    NSMutableArray *_genericAdvisorys;
    NSMutableArray *_incidentAdvisorys;
    NSMutableArray *_noticeAdvisorys;
    GEOAdvisoryNotice *_tollAdvisory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOClickableAdvisory *clickableAdvisory;
@property (retain, nonatomic) GEOAdvisoryNotice *evAdvisory;
@property (retain, nonatomic) NSMutableArray *genericAdvisorys;
@property (readonly, nonatomic) BOOL hasClickableAdvisory;
@property (readonly, nonatomic) BOOL hasEvAdvisory;
@property (readonly, nonatomic) BOOL hasTollAdvisory;
@property (retain, nonatomic) NSMutableArray *incidentAdvisorys;
@property (retain, nonatomic) NSMutableArray *noticeAdvisorys;
@property (retain, nonatomic) GEOAdvisoryNotice *tollAdvisory;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)genericAdvisoryType;
+(Class)incidentAdvisoryType;
+(Class)noticeAdvisoryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)genericAdvisoryAtIndex:(NSUInteger)arg0 ;
-(id)incidentAdvisoryAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)noticeAdvisoryAtIndex:(NSUInteger)arg0 ;
-(void)addGenericAdvisory:(id)arg0 ;
-(void)addIncidentAdvisory:(id)arg0 ;
-(void)addNoticeAdvisory:(id)arg0 ;
-(void)clearGenericAdvisorys;
-(void)clearIncidentAdvisorys;
-(void)clearNoticeAdvisorys;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif