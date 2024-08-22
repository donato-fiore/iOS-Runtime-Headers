// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSONSCREENCODEAUTHENTICATIONAPPDOCUMENTCONTROLLER_H
#define VSONSCREENCODEAUTHENTICATIONAPPDOCUMENTCONTROLLER_H

@class NSString, IKViewElement;
@protocol VSMessageQueueDelegate;


#import "VSAppDocumentController.h"

@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSMessageQueueDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IKViewElement *regenerateCodeButtonElement; // ivar: _regenerateCodeButtonElement
@property (readonly) Class superclass;


-(BOOL)_updateOnscreenCodeViewModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateOnscreenCodeViewModel:(id)arg0 withTemplate:(id)arg1 ;
-(BOOL)_updateViewModel:(id)arg0 error:(*id)arg1 ;
-(id)_newViewModel;
-(id)_onscreenCodeViewModelWithViewModel:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)didAddMessagesToMessageQueue:(id)arg0 ;


@end


#endif