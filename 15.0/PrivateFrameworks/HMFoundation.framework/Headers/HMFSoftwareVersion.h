// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFSOFTWAREVERSION_H
#define HMFSOFTWAREVERSION_H

@class NSString;


#import "HMFVersion.h"

@interface HMFSoftwareVersion : HMFVersion

@property (readonly, copy) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy) NSString *shortVersionString;


+(BOOL)supportsSecureCoding;
+(id)versionFromOperatingSystemVersion:(struct ? )arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 updateVersion:(NSUInteger)arg2 ;
-(id)initWithMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 updateVersion:(NSUInteger)arg2 buildVersion:(id)arg3 ;
-(id)initWithVersionString:(id)arg0 ;
-(id)localizedDescription;
-(id)versionString;
-(struct ? )operatingSystemVersion;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif