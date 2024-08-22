// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSMARTPROMPTSTRINGGENERATOR_H
#define WFSMARTPROMPTSTRINGGENERATOR_H


#import <Foundation/Foundation.h>


@interface WFSmartPromptStringGenerator : NSObject



+(id)contentDescriptionWithAttributionSet:(id)arg0 contentItemCache:(id)arg1 ;
+(id)localizedPromptForWorkflowName:(id)arg0 attributionSet:(id)arg1 contentCollection:(id)arg2 contentItemCache:(id)arg3 contentDestination:(id)arg4 action:(id)arg5 isWebpageCoercion:(BOOL)arg6 ;
+(id)localizedSubtitleForWorkflowName:(id)arg0 attributionSet:(id)arg1 previousAttributions:(id)arg2 contentItemCache:(id)arg3 contentDestination:(id)arg4 action:(id)arg5 isWebpageCoercion:(BOOL)arg6 ;


@end


#endif