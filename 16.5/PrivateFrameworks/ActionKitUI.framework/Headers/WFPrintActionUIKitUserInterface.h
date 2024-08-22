// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPRINTACTIONUIKITUSERINTERFACE_H
#define WFPRINTACTIONUIKITUSERINTERFACE_H

@class WFActionUserInterface, NSString, UIPrintInteractionController;
@protocol UIPrintInteractionControllerDelegate, WFPrintActionUserInterface;



@interface WFPrintActionUIKitUserInterface : WFActionUserInterface <UIPrintInteractionControllerDelegate, WFPrintActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPrintInteractionController *printController; // ivar: _printController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)printInteractionControllerParentViewController:(id)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)showWithFile:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif