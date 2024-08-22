// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHAZAMMEDIAACTIONUIKITUSERINTERFACE_H
#define WFSHAZAMMEDIAACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFShazamMediaActionUserInterface;



@interface WFShazamMediaActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShazamMediaActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(BOOL)prefersModalPresentation;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)showWithCompletionHandler:(id)arg0 ;


@end


#endif