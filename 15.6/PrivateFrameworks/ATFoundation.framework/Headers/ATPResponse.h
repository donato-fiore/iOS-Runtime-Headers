// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATPRESPONSE_H
#define ATPRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "ATPError.h"

@interface ATPResponse : PBCodable <NSCopying>



@property (retain, nonatomic) ATPError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;


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