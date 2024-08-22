// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINPROCESSSECUREAPPACTION_H
#define SBINPROCESSSECUREAPPACTION_H

@class SBSLockScreenContentAction;


#import "SBApplicationSceneEntity.h"

@interface SBInProcessSecureAppAction : SBSLockScreenContentAction

@property (retain, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // ivar: _applicationSceneEntity


-(BOOL)isInProcessAction;
-(id)initWithType:(NSUInteger)arg0 applicationSceneEntity:(id)arg1 handler:(id)arg2 ;


@end


#endif