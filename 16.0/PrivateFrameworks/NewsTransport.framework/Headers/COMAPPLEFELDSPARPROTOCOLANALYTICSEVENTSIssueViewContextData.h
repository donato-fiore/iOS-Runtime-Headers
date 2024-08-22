// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSISSUEVIEWCONTEXTDATA_H
#define COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSISSUEVIEWCONTEXTDATA_H

@class PBCodable;
@protocol NSCopying;



@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewContextData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIssueViewContext;
@property (nonatomic) int issueViewContext; // ivar: _issueViewContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)issueViewContextAsString:(int)arg0 ;
-(int)StringAsIssueViewContext:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif