// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPCONTEXT_H
#define CLPCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleCategory; // ivar: _bundleCategory
@property (readonly, nonatomic) BOOL hasBundleCategory;
@property (nonatomic) BOOL hasIsDriving;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasWorkoutType;
@property (nonatomic) BOOL isDriving; // ivar: _isDriving
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) int workoutType; // ivar: _workoutType


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