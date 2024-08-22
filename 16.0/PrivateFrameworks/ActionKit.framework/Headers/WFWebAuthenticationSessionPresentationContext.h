// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWEBAUTHENTICATIONSESSIONPRESENTATIONCONTEXT_H
#define WFWEBAUTHENTICATIONSESSIONPRESENTATIONCONTEXT_H

@class NSString, UIWindow;
@protocol ASWebAuthenticationPresentationContextProviding;

#import <Foundation/Foundation.h>


@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIWindow *presentationAnchor; // ivar: _presentationAnchor
@property (readonly) Class superclass;


-(id)initWithPresentationAnchor:(id)arg0 ;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg0 ;


@end


#endif