// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBUNDLEINFORMATION_H
#define AKBUNDLEINFORMATION_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKBundleInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleDescription; // ivar: _bundleDescription
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (readonly, nonatomic) NSUInteger bundleType; // ivar: _bundleType
@property (readonly, copy, nonatomic) NSDictionary *otherInfo; // ivar: _otherInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 bundleName:(id)arg1 bundleDescription:(id)arg2 bundleType:(NSUInteger)arg3 otherInfo:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif