// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEDNSPROXYPROVIDERPROTOCOL_H
#define NEDNSPROXYPROVIDERPROTOCOL_H

@class NSString, NSDictionary;


#import "NEVPNProtocol.h"

@interface NEDNSProxyProviderProtocol : NEVPNProtocol

@property (copy) NSString *designatedRequirement; // ivar: _designatedRequirement
@property (copy) NSString *pluginType; // ivar: _pluginType
@property (copy) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (copy) NSDictionary *providerConfiguration; // ivar: _providerConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPluginType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif