// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBAPPNAMES_H
#define _INPBAPPNAMES_H

@class PBCodable, NSString;
@protocol _INPBAppNames, NSSecureCoding, NSCopying;



@interface _INPBAppNames : PBCodable <_INPBAppNames, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (copy, nonatomic) NSString *axSpokenName; // ivar: _axSpokenName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAppName;
@property (readonly, nonatomic) BOOL hasAxSpokenName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasSpotlightName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *spotlightName; // ivar: _spotlightName
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