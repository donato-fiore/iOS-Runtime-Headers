// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESPFLNOISABLE_H
#define DESPFLNOISABLE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "DESDataTransport.h"

@interface DESPFLNoisable : PBCodable <NSCopying>

 {
    ? _data32s;
    ? _datas;
    ? _has;
}


@property (readonly, nonatomic) *float data32s;
@property (readonly, nonatomic) NSUInteger data32sCount;
@property (retain, nonatomic) DESDataTransport *dataTransport; // ivar: _dataTransport
@property (readonly, nonatomic) *CGFloat datas;
@property (readonly, nonatomic) NSUInteger datasCount;
@property (readonly, nonatomic) BOOL hasDataTransport;
@property (nonatomic) BOOL hasIteration;
@property (readonly, nonatomic) BOOL hasRecipeId;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int iteration; // ivar: _iteration
@property (retain, nonatomic) NSString *recipeId; // ivar: _recipeId
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (nonatomic) int version; // ivar: _version
@property (nonatomic) CGFloat weight; // ivar: _weight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)dataAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(float)data32AtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addData32:(float)arg0 ;
-(void)addData:(CGFloat)arg0 ;
-(void)clearData32s;
-(void)clearDatas;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif