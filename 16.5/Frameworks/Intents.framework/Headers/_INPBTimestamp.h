// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBTIMESTAMP_H
#define _INPBTIMESTAMP_H

@class PBCodable, NSString;
@protocol _INPBTimestamp, NSSecureCoding, NSCopying;



@interface _INPBTimestamp : PBCodable <_INPBTimestamp, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasNanos;
@property (nonatomic) BOOL hasSeconds;
@property (readonly) NSUInteger hash;
@property (nonatomic) int nanos; // ivar: _nanos
@property (nonatomic) NSInteger seconds; // ivar: _seconds
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