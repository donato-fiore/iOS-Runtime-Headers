// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERCLASSTRANSIENTPATH_H
#define MCMCONTAINERCLASSTRANSIENTPATH_H



#import "MCMContainerClassPath.h"

@interface MCMContainerClassTransientPath : MCMContainerClassPath



+(id)_globalTemporaryComponent;
+(id)_temporaryComponent;
+(id)containerPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 ;
+(id)transientGlobalBundleURL;
+(id)transientGlobalURL;
+(id)transientURLWithUserIdentity:(id)arg0 ;


@end


#endif