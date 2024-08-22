// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIRELOCATEDBUNDLECONTAINER_H
#define MIRELOCATEDBUNDLECONTAINER_H



#import "MIBundleContainer.h"

@interface MIRelocatedBundleContainer : MIBundleContainer



-(BOOL)makeContainerLiveReplacingContainer:(id)arg0 reason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 withError:(*id)arg3 ;
-(BOOL)makeContainerLiveWithError:(*id)arg0 ;
-(BOOL)purgeContentWithError:(*id)arg0 ;
-(BOOL)regenerateDirectoryUUIDWithError:(*id)arg0 ;
-(BOOL)shouldHaveCorrespondingDataContainer;
-(NSUInteger)diskUsage;


@end


#endif