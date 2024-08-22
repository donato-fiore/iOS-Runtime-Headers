// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPLUGINPROXYPROVIDER_H
#define HKPLUGINPROXYPROVIDER_H

@class NSString;


#import "HKProxyProvider.h"

@interface HKPluginProxyProvider : HKProxyProvider

@property (readonly, nonatomic) NSString *pluginIdentifier;


-(id)initWithHealthStore:(id)arg0 pluginIdentifier:(id)arg1 exportedObject:(id)arg2 ;
-(id)proxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 error:(*id)arg2 ;
// -(void)fetchPluginProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)fetchProxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 endpointHandler:(id)arg2 errorHandler:(unk)arg3  ;


@end


#endif