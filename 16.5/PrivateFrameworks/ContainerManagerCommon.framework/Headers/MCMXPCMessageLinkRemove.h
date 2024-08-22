// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGELINKREMOVE_H
#define MCMXPCMESSAGELINKREMOVE_H

@protocol MCMParametersLinkRemove;


#import "MCMXPCMessageWithLinkBase.h"

@interface MCMXPCMessageLinkRemove : MCMXPCMessageWithLinkBase <MCMParametersLinkRemove>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(unsigned int)disposition;


@end


#endif