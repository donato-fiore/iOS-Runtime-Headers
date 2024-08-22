// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPPOICOLLECTIONREQUEST_H
#define CLPPOICOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPPoiCollectionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *harvests; // ivar: _harvests
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)harvestsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addHarvests:(id)arg0 ;
-(void)clearHarvests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif