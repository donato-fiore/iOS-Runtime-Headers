// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFIMGURUPLOADACTION_H
#define WFIMGURUPLOADACTION_H

@class WFAction;



@interface WFImgurUploadAction : WFAction



-(BOOL)isProgressIndeterminate;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)uploadInput:(id)arg0 withAccount:(id)arg1 ;


@end


#endif