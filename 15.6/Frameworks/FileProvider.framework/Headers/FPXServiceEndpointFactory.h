// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPXSERVICEENDPOINTFACTORY_H
#define FPXSERVICEENDPOINTFACTORY_H

@class NSDictionary;
@protocol NSFileProviderServiceEndpointCreating;

#import <Foundation/Foundation.h>

#import "FPXDomainContext.h"

@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating>

 {
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}




-(id)initWithServiceSources:(id)arg0 domainContext:(id)arg1 ;
-(void)getListenerEndpointForServiceName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif