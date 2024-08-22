// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMEDIAGROUPPROTOJOINEDMEDIADESTINATION_H
#define HMMEDIAGROUPPROTOJOINEDMEDIADESTINATION_H

@class PBCodable;
@protocol NSCopying;


#import "HMMediaGroupProtoMediaGroupData.h"
#import "HMMediaGroupProtoMediaDestination.h"

@interface HMMediaGroupProtoJoinedMediaDestination : PBCodable <NSCopying>



@property (retain, nonatomic) HMMediaGroupProtoMediaGroupData *group; // ivar: _group
@property (readonly, nonatomic) BOOL hasGroup;
@property (readonly, nonatomic) BOOL hasMediaDestination;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestination *mediaDestination; // ivar: _mediaDestination


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