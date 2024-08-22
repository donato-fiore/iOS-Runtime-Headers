// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERCLASSSTAGINGPATH_H
#define MCMCONTAINERCLASSSTAGINGPATH_H



#import "MCMContainerClassPath.h"

@interface MCMContainerClassStagingPath : MCMContainerClassPath



+(id)_globalStagingComponent;
+(id)_stagingComponent;
+(id)containerPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 ;
+(id)stagingGlobalURLWithUserIdentity:(id)arg0 ;
+(id)stagingURLWithUserIdentity:(id)arg0 ;


@end


#endif