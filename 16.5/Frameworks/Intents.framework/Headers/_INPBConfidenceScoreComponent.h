// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBCONFIDENCESCORECOMPONENT_H
#define _INPBCONFIDENCESCORECOMPONENT_H

@class PBCodable, NSString;
@protocol _INPBConfidenceScoreComponent, NSSecureCoding, NSCopying;



@interface _INPBConfidenceScoreComponent : PBCodable <_INPBConfidenceScoreComponent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly) NSUInteger hash;
@property (nonatomic) float score; // ivar: _score
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif