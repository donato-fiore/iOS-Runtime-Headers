// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWTYPERESOURCE_H
#define WFWORKFLOWTYPERESOURCE_H

@class NSString;
@protocol WFWorkflowReferencing;


#import "WFResource.h"
#import "WFWorkflow.h"

@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)mustBeAvailableForDisplay;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)refreshAvailability;


@end


#endif