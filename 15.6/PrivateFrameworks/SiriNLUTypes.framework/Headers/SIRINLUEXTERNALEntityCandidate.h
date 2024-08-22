// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALENTITYCANDIDATE_H
#define SIRINLUEXTERNALENTITYCANDIDATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRICOMMONStringValue.h"
#import "SIRINLUEXTERNALUsoGraph.h"
#import "SIRINLUEXTERNALRRGroupIdentifier.h"
#import "SIRINLUEXTERNALRRMetadata.h"
#import "SIRICOMMONDoubleValue.h"

@interface SIRINLUEXTERNALEntityCandidate : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *annotations; // ivar: _annotations
@property (retain, nonatomic) SIRICOMMONStringValue *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *entity; // ivar: _entity
@property (retain, nonatomic) SIRICOMMONStringValue *entityId; // ivar: _entityId
@property (retain, nonatomic) SIRINLUEXTERNALRRGroupIdentifier *groupId; // ivar: _groupId
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (readonly, nonatomic) BOOL hasEntity;
@property (readonly, nonatomic) BOOL hasEntityId;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasScore;
@property (retain, nonatomic) SIRINLUEXTERNALRRMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) SIRICOMMONDoubleValue *score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)annotationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAnnotations:(id)arg0 ;
-(void)clearAnnotations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif