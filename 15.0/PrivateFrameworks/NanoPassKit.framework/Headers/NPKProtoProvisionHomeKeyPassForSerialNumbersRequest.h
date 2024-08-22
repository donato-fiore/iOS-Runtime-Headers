// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOPROVISIONHOMEKEYPASSFORSERIALNUMBERSREQUEST_H
#define NPKPROTOPROVISIONHOMEKEYPASSFORSERIALNUMBERSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoProvisionHomeKeyPassForSerialNumbersRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *serialNumbers; // ivar: _serialNumbers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)serialNumbersAtIndex:(NSUInteger)arg0 ;
-(void)addSerialNumbers:(id)arg0 ;
-(void)clearSerialNumbers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif