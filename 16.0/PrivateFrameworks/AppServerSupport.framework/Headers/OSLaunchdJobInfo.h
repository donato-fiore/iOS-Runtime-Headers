// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLAUNCHDJOBINFO_H
#define OSLAUNCHDJOBINFO_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "OSLaunchdJobExitStatus.h"

@interface OSLaunchdJobInfo : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalPropertiesDictionary; // ivar: _additionalPropertiesDictionary
@property (readonly, nonatomic) OSLaunchdJobExitStatus *lastExitStatus; // ivar: _lastExitStatus
@property (readonly, nonatomic) int lastSpawnError; // ivar: _lastSpawnError
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)initWithState:(NSInteger)arg0 pid:(int)arg1 lastSpawnError:(int)arg2 lastExitStatus:(id)arg3 additionalPropertiesDict:(id)arg4 ;


@end


#endif