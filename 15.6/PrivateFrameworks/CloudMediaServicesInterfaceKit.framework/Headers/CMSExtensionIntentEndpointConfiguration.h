// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSEXTENSIONINTENTENDPOINTCONFIGURATION_H
#define CMSEXTENSIONINTENTENDPOINTCONFIGURATION_H

@class NSMutableSet;


#import "CMSExtensionEndpointConfiguration.h"

@interface CMSExtensionIntentEndpointConfiguration : CMSExtensionEndpointConfiguration

@property (retain, nonatomic) NSMutableSet *optionalMethods; // ivar: _optionalMethods


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 endpoint:(id)arg1 baseURL:(id)arg2 groupHeaders:(id)arg3 ;


@end


#endif