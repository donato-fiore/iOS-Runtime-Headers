// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWINDOWSCENEMANAGER_H
#define WFWINDOWSCENEMANAGER_H


#import <Foundation/Foundation.h>


@interface WFWindowSceneManager : NSObject



+(id)existingSceneSessionForEditingWorkflowReference:(id)arg0 ;
+(id)mainScene;
+(id)userActivityForEditingWorkflow:(id)arg0 ;
+(id)workflowIdentifierFromUserActivity:(id)arg0 ;
+(void)activateSceneForWorkflowReference:(id)arg0 sender:(id)arg1 ;
+(void)setupSession:(id)arg0 forEditingWorkflow:(id)arg1 ;


@end


#endif