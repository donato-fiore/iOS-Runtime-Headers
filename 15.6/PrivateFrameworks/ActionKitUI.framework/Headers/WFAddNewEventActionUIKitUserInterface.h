// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFADDNEWEVENTACTIONUIKITUSERINTERFACE_H
#define WFADDNEWEVENTACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFAddNewEventActionUserInterface, EKEventEditViewDelegate;



@interface WFAddNewEventActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFAddNewEventActionUserInterface, EKEventEditViewDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)eventEditViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)finishWithEventIdentifier:(id)arg0 error:(id)arg1 ;
-(void)showWithEventParameters:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif