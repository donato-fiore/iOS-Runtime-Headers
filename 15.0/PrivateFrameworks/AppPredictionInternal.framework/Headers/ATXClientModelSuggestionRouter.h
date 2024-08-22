// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCLIENTMODELSUGGESTIONROUTER_H
#define ATXCLIENTMODELSUGGESTIONROUTER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}




-(BOOL)isRoutingConfigurationLoaded;
-(BOOL)shouldPersistCacheForClientModel:(id)arg0 ;
-(BOOL)shouldRouteClientToInfoSuggestionEngine:(id)arg0 ;
-(id)init;


@end


#endif