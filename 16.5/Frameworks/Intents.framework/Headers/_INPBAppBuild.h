// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBAPPBUILD_H
#define _INPBAPPBUILD_H

@class PBCodable, NSString;
@protocol _INPBAppBuild, NSSecureCoding, NSCopying;


#import "_INPBAppId.h"
#import "_INPBBuildId.h"

@interface _INPBAppBuild : PBCodable <_INPBAppBuild, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAppId *appId; // ivar: _appId
@property (retain, nonatomic) _INPBBuildId *buildId; // ivar: _buildId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppId;
@property (readonly, nonatomic) BOOL hasBuildId;
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