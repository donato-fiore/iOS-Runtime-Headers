// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBERRORRESPONSE_H
#define NTPBERRORRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBErrorResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *errors; // ivar: _errors


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorsAtIndex:(NSUInteger)arg0 ;
-(void)addErrors:(id)arg0 ;
-(void)clearErrors;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif