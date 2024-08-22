// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHSTORECONFIGURATION_H
#define HKHEALTHSTORECONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKProfileIdentifier.h"

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) unsigned int applicationSDKVersion; // ivar: _applicationSDKVersion
@property (readonly, copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // ivar: _profileIdentifier
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly, copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceBundleIdentifier:(id)arg0 sourceVersion:(id)arg1 debugIdentifier:(id)arg2 profileIdentifier:(id)arg3 applicationSDKVersion:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif