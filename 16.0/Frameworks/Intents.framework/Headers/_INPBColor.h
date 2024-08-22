// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCOLOR_H
#define _INPBCOLOR_H

@class PBCodable, NSString;
@protocol _INPBColor, NSSecureCoding, NSCopying;



@interface _INPBColor : PBCodable <_INPBColor, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat blue; // ivar: _blue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat green; // ivar: _green
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) BOOL hasRed;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat red; // ivar: _red
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