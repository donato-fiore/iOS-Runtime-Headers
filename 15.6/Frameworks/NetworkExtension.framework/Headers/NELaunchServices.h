// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NELAUNCHSERVICES_H
#define NELAUNCHSERVICES_H


#import <Foundation/Foundation.h>


@interface NELaunchServices : NSObject



+(id)bundleProxyForIdentifier:(id)arg0 uid:(unsigned int)arg1 plugins:(*id)arg2 ;
+(id)copyLSProxyForUID:(unsigned int)arg0 ;
+(id)lookupIdentifier:(id)arg0 plugins:(*id)arg1 ;
+(id)pluginClassToExtensionPoint:(NSInteger)arg0 ;
+(id)pluginProxyWithIdentifier:(id)arg0 type:(id)arg1 pluginClass:(NSInteger)arg2 extensionPoint:(id)arg3 ;


@end


#endif