// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHINTEGRATIONTEST_H
#define CHINTEGRATIONTEST_H

@protocol CHIntegrationTestProtocol;

#import <Foundation/Foundation.h>


@interface CHIntegrationTest : NSObject {
    NSObject<CHIntegrationTestProtocol> *_xpcClient;
}




-(id)init;
-(void)populateSampleAppLaunchEmbeddingWithCompletion:(id)arg0 ;


@end


#endif