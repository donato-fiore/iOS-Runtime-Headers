// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEDELETEUSERMANAGEDASSET_H
#define MCMXPCMESSAGEDELETEUSERMANAGEDASSET_H

@class NSString;
@protocol MCMParametersDeleteUserManagedAsset;


#import "MCMXPCMessageWithContainerBase.h"
#import "MCMContainerIdentity.h"

@interface MCMXPCMessageDeleteUserManagedAsset : MCMXPCMessageWithContainerBase <MCMParametersDeleteUserManagedAsset>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) NSString *sourceRelativePath; // ivar: _sourceRelativePath


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif