// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDICTATETEXTACTIONUIKITUSERINTERFACE_H
#define WFDICTATETEXTACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFDictateTextActionViewDelegate, WFDictateTextActionUserInterface;


#import "WFDictateTextActionView.h"

@interface WFDictateTextActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFDictateTextActionViewDelegate, WFDictateTextActionUserInterface>



@property (retain, nonatomic) WFDictateTextActionView *actionView; // ivar: _actionView
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(BOOL)prefersModalPresentation;
-(void)actionDidBeginListening;
-(void)actionDidReceiveTranscription:(id)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)dictateTextActionViewDidTapStopButton:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)showWithCompletionHandler:(id)arg0 ;


@end


#endif