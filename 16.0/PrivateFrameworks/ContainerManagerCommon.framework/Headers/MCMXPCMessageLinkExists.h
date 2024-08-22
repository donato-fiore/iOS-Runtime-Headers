// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGELINKEXISTS_H
#define MCMXPCMESSAGELINKEXISTS_H

@protocol MCMParametersLinkExists;


#import "MCMXPCMessageBase.h"
#import "MCMContainerIdentity.h"

@interface MCMXPCMessageLinkExists : MCMXPCMessageBase <MCMParametersLinkExists>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) MCMContainerIdentity *containerAIdentity; // ivar: _containerAIdentity
@property (readonly, nonatomic) MCMContainerIdentity *containerBIdentity; // ivar: _containerBIdentity


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(unsigned int)disposition;


@end


#endif