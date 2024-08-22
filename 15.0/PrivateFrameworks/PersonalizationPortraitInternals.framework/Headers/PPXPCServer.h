// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPXPCSERVER_H
#define PPXPCSERVER_H


#import <Foundation/Foundation.h>


@interface PPXPCServer : NSObject



+(void)_registerConfigListener;
+(void)_registerConnectionsListener;
+(void)_registerContactListener;
+(void)_registerEventListener;
+(void)_registerInternalListener;
+(void)_registerLocationReadOnlyListener;
+(void)_registerLocationReadWriteListener;
+(void)_registerNamedEntityReadOnlyListener;
+(void)_registerNamedEntityReadWriteListener;
+(void)_registerQuickTypeListener;
+(void)_registerSocialHighlightListener;
+(void)_registerStringDonationListener;
+(void)_registerTemporalClusterListener;
+(void)_registerTopicReadOnlyListener;
+(void)_registerTopicReadWriteListener;
+(void)registerXPCListeners;


@end


#endif