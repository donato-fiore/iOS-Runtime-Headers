// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRECORD_H
#define FCCKPRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "FCCKPIdentifier.h"
#import "FCCKPRecordIdentifier.h"
#import "FCCKPDateStatistics.h"
#import "FCCKPRecordType.h"

@interface FCCKPRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *conflictLoserEtags; // ivar: _conflictLoserEtags
@property (retain, nonatomic) FCCKPIdentifier *createdBy; // ivar: _createdBy
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSMutableArray *fields; // ivar: _fields
@property (readonly, nonatomic) BOOL hasCreatedBy;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasModifiedBy;
@property (readonly, nonatomic) BOOL hasModifiedByDevice;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) FCCKPIdentifier *modifiedBy; // ivar: _modifiedBy
@property (retain, nonatomic) NSString *modifiedByDevice; // ivar: _modifiedByDevice
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) FCCKPDateStatistics *timeStatistics; // ivar: _timeStatistics
@property (retain, nonatomic) FCCKPRecordType *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)conflictLoserEtagsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldsAtIndex:(NSUInteger)arg0 ;
-(void)addConflictLoserEtags:(id)arg0 ;
-(void)addFields:(id)arg0 ;
-(void)clearConflictLoserEtags;
-(void)clearFields;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif