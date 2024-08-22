// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPPRESSURECOLLECTIONREQUEST_H
#define CLPPRESSURECOLLECTIONREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "CLPMeta.h"
#import "CLPPressure.h"
#import "CLPLocation.h"

@interface CLPPressureCollectionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (retain, nonatomic) CLPPressure *pressure; // ivar: _pressure
@property (retain, nonatomic) CLPLocation *pressureLocation; // ivar: _pressureLocation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif