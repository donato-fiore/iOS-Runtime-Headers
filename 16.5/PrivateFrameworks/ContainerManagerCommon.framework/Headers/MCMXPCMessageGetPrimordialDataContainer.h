// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEGETPRIMORDIALDATACONTAINER_H
#define MCMXPCMESSAGEGETPRIMORDIALDATACONTAINER_H

@protocol MCMParametersGetPrimordialDataContainer;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageGetPrimordialDataContainer : MCMXPCMessageBase <MCMParametersGetPrimordialDataContainer>



@property (readonly, nonatomic, getter=isExtension) BOOL extension; // ivar: _extension
@property (readonly, nonatomic) BOOL useCodeSignDatabase; // ivar: _useCodeSignDatabase


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif