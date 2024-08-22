// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBISSUELISTRECORD_H
#define NTPBISSUELISTRECORD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBIssueListRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NSMutableArray *issueIDs; // ivar: _issueIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)issueIDsAtIndex:(NSUInteger)arg0 ;
-(void)addIssueIDs:(id)arg0 ;
-(void)clearIssueIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif