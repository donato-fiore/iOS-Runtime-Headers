// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPWTWCOLLECTIONREQUEST_H
#define CLPWTWCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPWtwCollectionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (retain, nonatomic) NSMutableArray *wtwLocations; // ivar: _wtwLocations


+(Class)wtwLocationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)wtwLocationAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addWtwLocation:(id)arg0 ;
-(void)clearWtwLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif