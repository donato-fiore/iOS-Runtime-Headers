// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICARDPROVIDERREGISTRY_H
#define SIRIUICARDPROVIDERREGISTRY_H


#import <Foundation/Foundation.h>


@interface SiriUICardProviderRegistry : NSObject



+(id)sharedInstance;
-(void)loadProviders;
-(void)preloadProviders;


@end


#endif