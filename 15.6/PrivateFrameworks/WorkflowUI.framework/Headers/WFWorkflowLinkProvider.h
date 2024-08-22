// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWLINKPROVIDER_H
#define WFWORKFLOWLINKPROVIDER_H

@class NSString;


#import "WFWorkflowItemProvider.h"

@interface WFWorkflowLinkProvider : WFWorkflowItemProvider

@property (copy, nonatomic) NSString *exclusiveActivityType; // ivar: _exclusiveActivityType


-(id)initWithWorkflow:(id)arg0 userInterface:(id)arg1 ;
-(id)item;
-(id)shareShortcutEventForActivityType:(id)arg0 ;
-(void)generateItemURL;


@end


#endif