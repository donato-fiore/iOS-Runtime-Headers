// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSCENECLIENTHANDLE_H
#define FBSCENECLIENTHANDLE_H

@class NSString, FBSSceneClientIdentity, RBSProcessHandle;

#import <Foundation/Foundation.h>

#import "FBProcess.h"

@interface FBSceneClientHandle : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) FBSSceneClientIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) FBProcess *legacyProcess; // ivar: _legacyProcess
@property (readonly, nonatomic) RBSProcessHandle *processHandle;


+(id)handleForScene:(id)arg0 clientProcess:(id)arg1 ;
-(id)description;


@end


#endif