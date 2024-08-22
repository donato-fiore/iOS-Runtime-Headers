// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSUBSCRIBETOPODCASTACTION_H
#define WFSUBSCRIBETOPODCASTACTION_H

@class WFAction;



@interface WFSubscribeToPodcastAction : WFAction



-(id)contentDestinationWithError:(*id)arg0 ;
-(id)contentNotFoundError;
-(id)errorSubscribingToPodcast:(unsigned int)arg0 ;
-(id)genericSubscribeFailedError;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)subscribeToPodcast:(id)arg0 completion:(id)arg1 ;


@end


#endif