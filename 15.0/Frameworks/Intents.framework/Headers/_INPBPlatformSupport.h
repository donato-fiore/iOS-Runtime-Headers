// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBPLATFORMSUPPORT_H
#define _INPBPLATFORMSUPPORT_H

@class PBCodable, NSString;
@protocol _INPBPlatformSupport, NSSecureCoding, NSCopying;



@interface _INPBPlatformSupport : PBCodable <_INPBPlatformSupport, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMinimumOsVersion;
@property (nonatomic) BOOL hasSupportedPlatform;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *minimumOsVersion; // ivar: _minimumOsVersion
@property (readonly) Class superclass;
@property (nonatomic) int supportedPlatform; // ivar: _supportedPlatform


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)supportedPlatformAsString:(int)arg0 ;
-(int)StringAsSupportedPlatform:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif