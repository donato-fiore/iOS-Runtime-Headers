// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPREADONLYCLOUDCONTAINER_H
#define MSPREADONLYCLOUDCONTAINER_H



#import "MSPCloudContainer.h"

@interface MSPReadOnlyCloudContainer : MSPCloudContainer



-(void)pushChanges:(id)arg0 withGroup:(id)arg1 completion:(id)arg2 ;
-(void)removeCloudContainerWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)setupCloudContainerWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToChangesWithCompletion:(id)arg0 ;


@end


#endif