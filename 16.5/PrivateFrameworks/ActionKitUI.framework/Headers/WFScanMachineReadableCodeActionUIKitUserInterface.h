// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSCANMACHINEREADABLECODEACTIONUIKITUSERINTERFACE_H
#define WFSCANMACHINEREADABLECODEACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString, UINavigationController;
@protocol WFScanMachineReadableCodeActionUserInterface;



@interface WFScanMachineReadableCodeActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFScanMachineReadableCodeActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithCode:(id)arg0 error:(id)arg1 ;
-(void)showWithCompletionHandler:(id)arg0 ;


@end


#endif