// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSAVETOCAMERAROLLACTION_H
#define WFSAVETOCAMERAROLLACTION_H

@class WFAction;



@interface WFSaveToCameraRollAction : WFAction



-(id)contentDestinationWithError:(*id)arg0 ;
-(id)fetchOptions;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithAssetCollection:(id)arg0 input:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif