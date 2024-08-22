// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAWDHEALTHKITEXPERIMENTALCONDITION_H
#define HDAWDHEALTHKITEXPERIMENTALCONDITION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDAWDHealthKitExperimentalCondition : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *experimentIdentifier; // ivar: _experimentIdentifier
@property (readonly, nonatomic) BOOL hasExperimentIdentifier;
@property (nonatomic) BOOL hasTestCondition;
@property (nonatomic) NSInteger testCondition; // ivar: _testCondition


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