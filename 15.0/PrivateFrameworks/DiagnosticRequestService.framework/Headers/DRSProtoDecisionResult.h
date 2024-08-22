// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSPROTODECISIONRESULT_H
#define DRSPROTODECISIONRESULT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface DRSProtoDecisionResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL accepted; // ivar: _accepted
@property (nonatomic) BOOL hasAccepted;
@property (readonly, nonatomic) BOOL hasRejectionReason;
@property (retain, nonatomic) NSString *rejectionReason; // ivar: _rejectionReason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif