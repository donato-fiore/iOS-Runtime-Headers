// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPOCKETADDACTION_H
#define WFPOCKETADDACTION_H

@class WFAction, NSString, NSError;
@protocol PocketAPIDelegate, OS_dispatch_group;



@interface WFPocketAddAction : WFAction <PocketAPIDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_group> *addGroup; // ivar: _addGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *lastError; // ivar: _lastError
@property (readonly) Class superclass;


-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)pocketAPI:(id)arg0 receivedResponse:(id)arg1 forAPIMethod:(id)arg2 error:(id)arg3 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif