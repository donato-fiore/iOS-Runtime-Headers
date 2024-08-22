// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EMREMOTEINTERFACEDISTANTOBJECTREATTEMPT_H
#define _EMREMOTEINTERFACEDISTANTOBJECTREATTEMPT_H

@class NSError, NSInvocation;

#import <Foundation/Foundation.h>


@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject

@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSInvocation *invocation; // ivar: _invocation


+(id)recordedAttemptWithOriginalInvocation:(id)arg0 target:(id)arg1 error:(id)arg2 ;
-(id)debugDescription;
-(id)initWithOriginalInvocation:(id)arg0 target:(id)arg1 error:(id)arg2 ;
-(void)perform;


@end


#endif