// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPIONOSPHERECOLLECTIONREQUEST_H
#define CLPIONOSPHERECOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) NSMutableArray *ionoDatas; // ivar: _ionoDatas
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta


+(Class)ionoDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ionoDataAtIndex:(NSUInteger)arg0 ;
-(void)addIonoData:(id)arg0 ;
-(void)clearIonoDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif