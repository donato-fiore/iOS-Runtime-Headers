// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAOVPN_H
#define NEAOVPN_H

@class NSString, NSDictionary;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (copy) NSString *activeInterfaceProtocolKey; // ivar: _activeInterfaceProtocolKey
@property (getter=isAllowAllCaptiveNetworkPlugins) BOOL allowAllCaptiveNetworkPlugins; // ivar: _allowAllCaptiveNetworkPlugins
@property (getter=isAllowCaptiveWebSheet) BOOL allowCaptiveWebSheet; // ivar: _allowCaptiveWebSheet
@property (copy) NSDictionary *allowedCaptiveNetworkPlugins; // ivar: _allowedCaptiveNetworkPlugins
@property (copy) NSDictionary *applicationExceptions; // ivar: _applicationExceptions
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy) NSDictionary *interfaceProtocolMapping; // ivar: _interfaceProtocolMapping
@property (copy) NSDictionary *serviceExceptions; // ivar: _serviceExceptions
@property (getter=isToggleEnabled) BOOL toggleEnabled; // ivar: _toggleEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif