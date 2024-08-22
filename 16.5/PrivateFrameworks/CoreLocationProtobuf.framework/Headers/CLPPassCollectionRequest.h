// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPPASSCOLLECTIONREQUEST_H
#define CLPPASSCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray, NSData;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPPassCollectionRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (retain, nonatomic) NSMutableArray *passLocations; // ivar: _passLocations
@property (retain, nonatomic) NSData *signature; // ivar: _signature


+(Class)passLocationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)passLocationAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addPassLocation:(id)arg0 ;
-(void)clearPassLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif