// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLRAMPINGRESPONSE_H
#define CPLRAMPINGRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CPLRampingResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *responses; // ivar: _responses


+(Class)responseType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)responseAtIndex:(NSUInteger)arg0 ;
-(void)addResponse:(id)arg0 ;
-(void)clearResponses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif