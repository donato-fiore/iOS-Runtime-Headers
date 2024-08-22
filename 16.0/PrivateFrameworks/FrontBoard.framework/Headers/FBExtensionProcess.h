// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBEXTENSIONPROCESS_H
#define FBEXTENSIONPROCESS_H

@class FBSExtensionInfo;


#import "FBProcess.h"

@interface FBExtensionProcess : FBProcess {
    os_unfair_lock_s _hostProcessLock;
    FBProcess *_lock_hostProcess;
}


@property (readonly, nonatomic) FBSExtensionInfo *extensionInfo; // ivar: _extensionInfo
@property (readonly, nonatomic) int hostPID; // ivar: _hostPID
@property (readonly, nonatomic) FBProcess *hostProcess;


-(BOOL)isExtensionProcess;
-(id)succinctDescriptionBuilder;
-(void)_finishInit;


@end


#endif