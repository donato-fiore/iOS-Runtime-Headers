// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXWEBSITEDATASTOREFACTORY_H
#define SXWEBSITEDATASTOREFACTORY_H

@class NSString;
@protocol SXWebsiteDataStoreFactory;

#import <Foundation/Foundation.h>

#import "SXProxyConfiguration.h"

@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXProxyConfiguration *proxyConfiguration; // ivar: _proxyConfiguration
@property (readonly) Class superclass;


-(id)createWebsiteDataStore;
-(id)initWithProxyConfiguration:(id)arg0 ;


@end


#endif