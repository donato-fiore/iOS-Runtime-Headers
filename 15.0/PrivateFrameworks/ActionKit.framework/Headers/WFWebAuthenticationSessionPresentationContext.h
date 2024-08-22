// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEBAUTHENTICATIONSESSIONPRESENTATIONCONTEXT_H
#define WFWEBAUTHENTICATIONSESSIONPRESENTATIONCONTEXT_H

@class NSString;
@protocol ASWebAuthenticationPresentationContextProviding, WFUserInterfaceHost;

#import <Foundation/Foundation.h>


@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface


-(id)initWithUserInterface:(id)arg0 ;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg0 ;


@end


#endif