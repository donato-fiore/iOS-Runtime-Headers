// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYXPCACTIVITYREGISTRAR_H
#define BYXPCACTIVITYREGISTRAR_H


#import <Foundation/Foundation.h>


@interface BYXPCActivityRegistrar : NSObject



+(id)sharedInstance;
-(void)registerActivityWithIdentifier:(char *)arg0 criteria:(id)arg1 handler:(id)arg2 ;
-(void)unregisterActivityWithIdentifier:(char *)arg0 ;


@end


#endif