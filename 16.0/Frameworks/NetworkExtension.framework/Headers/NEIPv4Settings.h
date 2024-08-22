// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIPV4SETTINGS_H
#define NEIPV4SETTINGS_H

@class NSArray, NSString;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (readonly) NSArray *addresses; // ivar: _addresses
@property NSInteger configMethod; // ivar: _configMethod
@property (copy) NSArray *excludedRoutes; // ivar: _excludedRoutes
@property (copy) NSArray *includedRoutes; // ivar: _includedRoutes
@property BOOL overridePrimary; // ivar: _overridePrimary
@property (copy) NSString *router; // ivar: _router
@property (readonly) NSArray *subnetMasks; // ivar: _subnetMasks


+(BOOL)supportsSecureCoding;
+(id)settingsWithAutomaticAddressing;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)hasDefaultRoute;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithAddresses:(id)arg0 subnetMasks:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigMethod:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif