// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDBETAAPPVERSION_H
#define ASDBETAAPPVERSION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASDBetaAppVersion : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSInteger _platform;
    NSString *_shortVersion;
}


@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSInteger platform;
@property (readonly) NSString *shortVersion;


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