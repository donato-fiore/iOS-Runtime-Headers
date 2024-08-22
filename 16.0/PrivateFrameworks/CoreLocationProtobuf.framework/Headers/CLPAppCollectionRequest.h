// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPAPPCOLLECTIONREQUEST_H
#define CLPAPPCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray, NSData;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPAppCollectionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *appLocations; // ivar: _appLocations
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (retain, nonatomic) NSData *signature; // ivar: _signature


+(Class)appLocationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)appLocationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)addAppLocation:(id)arg0 ;
-(void)clearAppLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif