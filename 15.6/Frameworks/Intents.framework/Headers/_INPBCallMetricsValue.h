// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCALLMETRICSVALUE_H
#define _INPBCALLMETRICSVALUE_H

@class PBCodable, NSString;
@protocol _INPBCallMetricsValue, NSSecureCoding, NSCopying;



@interface _INPBCallMetricsValue : PBCodable <_INPBCallMetricsValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat callDuration; // ivar: _callDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) BOOL hasTimeToEstablish;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeToEstablish; // ivar: _timeToEstablish


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