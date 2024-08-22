// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDBACKGROUNDRUNNINGASSERTION_H
#define _HDBACKGROUNDRUNNINGASSERTION_H

@class HDAssertion, BKSProcessAssertion, CLInUseAssertion;


#import "HDHealthStoreClient.h"

@interface _HDBackgroundRunningAssertion : HDAssertion {
    BOOL _shouldAcquireCLAssertion;
    HDHealthStoreClient *_client;
    BKSProcessAssertion *_bksAssertion;
    CLInUseAssertion *_coreLocationAssertion;
}






@end


#endif