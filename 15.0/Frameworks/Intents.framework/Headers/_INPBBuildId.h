// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBBUILDID_H
#define _INPBBUILDID_H

@class PBCodable, NSString;
@protocol _INPBBuildId, NSSecureCoding, NSCopying;



@interface _INPBBuildId : PBCodable <_INPBBuildId, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *buildNumber; // ivar: _buildNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBuildNumber;
@property (readonly, nonatomic) BOOL hasVersionNumber;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *versionNumber; // ivar: _versionNumber


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