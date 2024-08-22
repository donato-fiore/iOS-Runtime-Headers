// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDBETAAPPVERSION_H
#define ASDBETAAPPVERSION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASDBetaAppVersion : NSObject <NSSecureCoding, NSCopying>



@property (copy) NSString *bundleID; // ivar: _bundleID
@property (copy) NSString *bundleVersion; // ivar: _bundleVersion
@property NSInteger platform; // ivar: _platform
@property (copy) NSString *shortVersion; // ivar: _shortVersion


+(BOOL)supportsSecureCoding;
+(NSInteger)defaultPlatform;
+(id)versionWithBundleID:(id)arg0 bundleVersion:(id)arg1 andShortVersion:(id)arg2 ;
+(id)versionWithBundleID:(id)arg0 bundleVersion:(id)arg1 platform:(NSInteger)arg2 andShortVersion:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif