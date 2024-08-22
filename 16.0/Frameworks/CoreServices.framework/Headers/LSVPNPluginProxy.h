// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSVPNPLUGINPROXY_H
#define LSVPNPLUGINPROXY_H

@protocol NSSecureCoding;


#import "LSBundleProxy.h"

@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)VPNPluginProxyForIdentifier:(id)arg0 ;
+(id)VPNPluginProxyForIdentifier:(id)arg0 withContext:(struct LSContext *)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg0 withContext:(struct LSContext *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif