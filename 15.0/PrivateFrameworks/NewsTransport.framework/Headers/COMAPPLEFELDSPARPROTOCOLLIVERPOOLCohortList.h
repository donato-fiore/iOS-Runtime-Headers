// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMAPPLEFELDSPARPROTOCOLLIVERPOOLCOHORTLIST_H
#define COMAPPLEFELDSPARPROTOCOLLIVERPOOLCOHORTLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cohorts; // ivar: _cohorts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cohortsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCohorts:(id)arg0 ;
-(void)clearCohorts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif