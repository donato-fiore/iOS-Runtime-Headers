// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINSTAPAPERADDACTION_H
#define WFINSTAPAPERADDACTION_H



#import "WFInstapaperAction.h"

@interface WFInstapaperAddAction : WFInstapaperAction



-(id)connectionTypes;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)engine:(id)arg0 connection:(id)arg1 didAddBookmark:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 selectedFolder:(id)arg1 ;


@end


#endif