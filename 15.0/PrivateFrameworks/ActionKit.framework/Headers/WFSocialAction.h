// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSOCIALACTION_H
#define WFSOCIALACTION_H

@class NSString;


#import "WFShareExtensionAction.h"

@interface WFSocialAction : WFShareExtensionAction

@property (readonly, nonatomic) NSString *postPrefix;


+(id)userInterfaceProtocol;
-(BOOL)convertsAnimatedImagesToVideo;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)convertAnimatedImagesToVideoWithInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif