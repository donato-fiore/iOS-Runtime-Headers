// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAWDHEALTHKITCOACHINGFEATUREGROUP_H
#define HDAWDHEALTHKITCOACHINGFEATUREGROUP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *futures; // ivar: _futures
@property (retain, nonatomic) NSMutableArray *pasts; // ivar: _pasts


+(Class)futureType;
+(Class)pastType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)futureAtIndex:(NSUInteger)arg0 ;
-(id)pastAtIndex:(NSUInteger)arg0 ;
-(void)addFuture:(id)arg0 ;
-(void)addPast:(id)arg0 ;
-(void)clearFutures;
-(void)clearPasts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif