// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTCLIENTDRAWABLEINTERVAL_H
#define SIGNPOSTCLIENTDRAWABLEINTERVAL_H

@class NSString;


#import "SignpostAnimationSubInterval.h"

@interface SignpostClientDrawableInterval : SignpostAnimationSubInterval

@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) unsigned int queueID; // ivar: _queueID
@property (readonly, nonatomic) unsigned int surfaceID; // ivar: _surfaceID
@property (readonly, nonatomic) NSUInteger threadID; // ivar: _threadID


-(id)initWithClientDrawableInterval:(id)arg0 ;


@end


#endif