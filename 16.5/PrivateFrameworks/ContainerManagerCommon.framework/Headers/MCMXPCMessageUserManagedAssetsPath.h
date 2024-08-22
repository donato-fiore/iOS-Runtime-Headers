// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEUSERMANAGEDASSETSPATH_H
#define MCMXPCMESSAGEUSERMANAGEDASSETSPATH_H

@protocol MCMParametersUserManagedAssetsPath;


#import "MCMXPCMessageWithContainerBase.h"
#import "MCMContainerIdentity.h"

@interface MCMXPCMessageUserManagedAssetsPath : MCMXPCMessageWithContainerBase <MCMParametersUserManagedAssetsPath>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) BOOL createIfNecessary; // ivar: _createIfNecessary
@property (readonly, nonatomic, getter=isRelative) BOOL relative; // ivar: _relative


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif