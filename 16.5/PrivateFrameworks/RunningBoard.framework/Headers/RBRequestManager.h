// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBREQUESTMANAGER_H
#define RBREQUESTMANAGER_H

@protocol RBRequestManaging, RBDaemonContextProviding;

#import <Foundation/Foundation.h>


@interface RBRequestManager : NSObject <RBRequestManaging>

 {
    id<RBDaemonContextProviding> *_daemonContext;
}




-(id)initWithContext:(id)arg0 ;
-(void)executeLaunchRequest:(id)arg0 euid:(unsigned int)arg1 requestor:(id)arg2 entitlements:(id)arg3 completion:(id)arg4 ;


@end


#endif