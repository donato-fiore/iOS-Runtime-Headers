// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBTAGLISTRECORD_H
#define NTPBTAGLISTRECORD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBTagListRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NSMutableArray *tagIDs; // ivar: _tagIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tagIDsAtIndex:(NSUInteger)arg0 ;
-(void)addTagIDs:(id)arg0 ;
-(void)clearTagIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif