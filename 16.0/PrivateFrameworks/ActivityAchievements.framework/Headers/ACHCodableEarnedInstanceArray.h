// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHCODABLEEARNEDINSTANCEARRAY_H
#define ACHCODABLEEARNEDINSTANCEARRAY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ACHCodableEarnedInstanceArray : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *earnedInstances; // ivar: _earnedInstances


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)earnedInstancesAtIndex:(NSUInteger)arg0 ;
-(id)initWithCodableEarnedInstances:(id)arg0 ;
-(id)initWithSerializedData:(id)arg0 error:(*id)arg1 ;
-(void)addEarnedInstances:(id)arg0 ;
-(void)clearEarnedInstances;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif