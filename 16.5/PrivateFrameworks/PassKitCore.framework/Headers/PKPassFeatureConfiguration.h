// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSFEATURECONFIGURATION_H
#define PKPASSFEATURECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"

@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange; // ivar: _versionRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassFeatureConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif