// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRELLOACCESSRESOURCEUSERINTERFACE_H
#define WFTRELLOACCESSRESOURCEUSERINTERFACE_H

@class WFActionUserInterface, NSString;
@protocol WFTrelloAccessResourceUserInterfaceProtocol, ASWebAuthenticationPresentationContextProviding;



@interface WFTrelloAccessResourceUserInterface : WFActionUserInterface <WFTrelloAccessResourceUserInterfaceProtocol, ASWebAuthenticationPresentationContextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)authorizationURLWithCallbackURL:(id)arg0 ;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg0 ;
-(void)authorizeWithCompletionHandler:(id)arg0 ;


@end


#endif