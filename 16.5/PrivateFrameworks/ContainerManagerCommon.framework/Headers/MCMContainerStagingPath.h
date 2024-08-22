// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERSTAGINGPATH_H
#define MCMCONTAINERSTAGINGPATH_H



#import "MCMContainerPath.h"

@interface MCMContainerStagingPath : MCMContainerPath

@property (retain, nonatomic) MCMContainerPath *destinationContainerPath; // ivar: _destinationContainerPath


+(Class)_containerClassPathClass;
+(id)stagingContainerPathForDestinationContainerPath:(id)arg0 stagingPathIdentifier:(id)arg1 ;


@end


#endif