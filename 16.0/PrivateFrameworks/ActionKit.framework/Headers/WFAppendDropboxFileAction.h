// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPENDDROPBOXFILEACTION_H
#define WFAPPENDDROPBOXFILEACTION_H



#import "WFStorageServiceAction.h"

@interface WFAppendDropboxFileAction : WFStorageServiceAction



-(BOOL)isProgressIndeterminate;
-(id)filenamePlaceholderText;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)storageService;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;


@end


#endif