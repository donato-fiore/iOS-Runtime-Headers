// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSOFTWAREVERSION_H
#define NUSOFTWAREVERSION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUSoftwareVersion : NSObject <NSCopying>



@property (copy) NSString *appVersion; // ivar: _appVersion
@property (copy) NSString *buildNumber; // ivar: _buildNumber
@property (copy) NSString *platform; // ivar: _platform
@property NSInteger schemaRevision; // ivar: _schemaRevision


+(id)_frameworkVersion;
+(id)currentSoftwareVersion;
+(id)frameworkVersion;
+(id)softwareVersionFromArchivalRepresentation:(id)arg0 ;
+(id)systemBuildVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSoftwareVersion:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivalRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif