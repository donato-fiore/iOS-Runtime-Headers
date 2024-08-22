// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBAPPBUNDLEINFO_H
#define _INPBAPPBUNDLEINFO_H

@class PBCodable, NSString, NSArray;
@protocol _INPBAppBundleInfo, NSSecureCoding, NSCopying;


#import "_INPBAppId.h"
#import "_INPBBuildId.h"

@interface _INPBAppBundleInfo : PBCodable <_INPBAppBundleInfo, NSSecureCoding, NSCopying>

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
@property (copy, nonatomic) NSArray *intentSupports; // ivar: _intentSupports
@property (readonly, nonatomic) NSUInteger intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects; // ivar: _localizedProjects
@property (readonly, nonatomic) NSUInteger localizedProjectsCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedPlatforms; // ivar: _supportedPlatforms
@property (readonly, nonatomic) NSUInteger supportedPlatformsCount;


+(BOOL)supportsSecureCoding;
+(Class)intentSupportType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentSupportAtIndex:(NSUInteger)arg0 ;
-(id)localizedProjectsAtIndex:(NSUInteger)arg0 ;
-(id)supportedPlatformsAtIndex:(NSUInteger)arg0 ;
-(void)addIntentSupport:(id)arg0 ;
-(void)addLocalizedProjects:(id)arg0 ;
-(void)addSupportedPlatforms:(id)arg0 ;
-(void)clearIntentSupports;
-(void)clearLocalizedProjects;
-(void)clearSupportedPlatforms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif