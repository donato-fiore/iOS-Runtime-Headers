// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAADJUSTMENTVERSIONINFO_H
#define IPAADJUSTMENTVERSIONINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IPAAdjustmentVersionInfo : NSObject <NSCopying>



@property (copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (copy, nonatomic) NSString *buildNumber; // ivar: _buildNumber
@property (copy, nonatomic) NSString *platform; // ivar: _platform
@property (nonatomic) NSInteger schemaRevision; // ivar: _schemaRevision


+(id)_frameworkVersion;
+(id)currentVersionInfo;
+(id)frameworkVersion;
+(id)systemBuildVersion;
+(id)versionInfoFromArchivalRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVersionInfo:(id)arg0 ;
-(id)archivalRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif