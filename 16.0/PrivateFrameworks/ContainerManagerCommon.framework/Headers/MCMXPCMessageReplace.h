// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEREPLACE_H
#define MCMXPCMESSAGEREPLACE_H

@protocol MCMParametersReplace;


#import "MCMXPCMessageBase.h"
#import "MCMConcreteContainerIdentity.h"

@interface MCMXPCMessageReplace : MCMXPCMessageBase <MCMParametersReplace>



@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew; // ivar: _containerIdentityNew
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld; // ivar: _containerIdentityOld


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(unsigned int)disposition;


@end


#endif