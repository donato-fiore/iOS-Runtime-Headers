// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDAPPUPLOADACTION_H
#define WFCLOUDAPPUPLOADACTION_H

@class WFAction, NSString;
@protocol CLAPIEngineDelegate;


#import "CLAPIEngine.h"

@interface WFCloudAppUploadAction : WFAction <CLAPIEngineDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLAPIEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)isProgressIndeterminate;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)cancel;
-(void)fileUploadDidProgress:(CGFloat)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)fileUploadDidSucceedWithResultingItem:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)linkBookmarkDidSucceedWithResultingItem:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)requestDidFailWithError:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif