// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCONFIDENCESCORE_H
#define _INPBCONFIDENCESCORE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBConfidenceScore, NSSecureCoding, NSCopying;



@interface _INPBConfidenceScore : PBCodable <_INPBConfidenceScore, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) float aggregateScore; // ivar: _aggregateScore
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) NSUInteger componentsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAggregateScore;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)componentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addComponents:(id)arg0 ;
-(void)clearComponents;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif