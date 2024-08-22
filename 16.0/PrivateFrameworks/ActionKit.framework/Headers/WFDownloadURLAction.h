// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDOWNLOADURLACTION_H
#define WFDOWNLOADURLACTION_H

@class WFAction;



@interface WFDownloadURLAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)isProgressIndeterminate;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)configureHTTPBodyForRequest:(id)arg0 withMethod:(id)arg1 completionHandler:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
// -(void)getContentsOfURLItem:(id)arg0 expectedByteCountHandler:(id)arg1 writtenByteCountHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif