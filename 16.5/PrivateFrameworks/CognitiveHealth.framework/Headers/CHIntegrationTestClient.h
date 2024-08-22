// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHINTEGRATIONTESTCLIENT_H
#define CHINTEGRATIONTESTCLIENT_H

@protocol CHIntegrationTestProtocol;

#import <Foundation/Foundation.h>

#import "CHXPCClientHelper.h"

@interface CHIntegrationTestClient : NSObject <CHIntegrationTestProtocol>

 {
    CHXPCClientHelper *_clientHelper;
}




-(id)init;
-(void)populateSampleAppLaunchEmbeddingWithCompletion:(id)arg0 ;


@end


#endif