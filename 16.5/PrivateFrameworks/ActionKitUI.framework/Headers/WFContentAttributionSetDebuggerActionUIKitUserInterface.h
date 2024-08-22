// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTATTRIBUTIONSETDEBUGGERACTIONUIKITUSERINTERFACE_H
#define WFCONTENTATTRIBUTIONSETDEBUGGERACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFContentAttributionSetDebuggerActionUserInterface;



@interface WFContentAttributionSetDebuggerActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFContentAttributionSetDebuggerActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)done;
-(void)finish;
-(void)showWithInput:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif