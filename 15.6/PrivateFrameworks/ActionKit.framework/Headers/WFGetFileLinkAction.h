// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGETFILELINKACTION_H
#define WFGETFILELINKACTION_H



#import "WFStorageServiceInputAction.h"

@interface WFGetFileLinkAction : WFStorageServiceInputAction



-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;


@end


#endif