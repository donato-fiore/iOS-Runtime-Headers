// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKARCADESERVICE_H
#define SKARCADESERVICE_H


#import <Foundation/Foundation.h>


@interface SKArcadeService : NSObject



+(void)arcadeSubscriptionStatusWithNonce:(NSUInteger)arg0 resultHandler:(id)arg1 ;
+(void)registerArcadeAppWithRandomFromLib:(id)arg0 randomFromLibLength:(unsigned int)arg1 resultHandler:(id)arg2 ;
+(void)repairArcadeApp;


@end


#endif