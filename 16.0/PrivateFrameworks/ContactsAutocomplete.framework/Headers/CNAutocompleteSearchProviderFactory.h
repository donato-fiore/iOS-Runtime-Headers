// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETESEARCHPROVIDERFACTORY_H
#define CNAUTOCOMPLETESEARCHPROVIDERFACTORY_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteSearchProviderFactory : NSObject



+(id)cachingProvider;
+(id)nonCachingProvider;


@end


#endif