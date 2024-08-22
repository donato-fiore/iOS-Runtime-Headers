// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBWORKOUTCUSTOMIZATION_H
#define _INPBWORKOUTCUSTOMIZATION_H

@class PBCodable, NSString;
@protocol _INPBWorkoutCustomization, NSSecureCoding, NSCopying;



@interface _INPBWorkoutCustomization : PBCodable <_INPBWorkoutCustomization, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *environment; // ivar: _environment
@property (copy, nonatomic) NSString *focus; // ivar: _focus
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (readonly, nonatomic) BOOL hasFocus;
@property (readonly) NSUInteger hash;
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