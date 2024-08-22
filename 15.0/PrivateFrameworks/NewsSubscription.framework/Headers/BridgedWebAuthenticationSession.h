// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRIDGEDWEBAUTHENTICATIONSESSION_H
#define BRIDGEDWEBAUTHENTICATIONSESSION_H

@class ASWebAuthenticationSession, NSString;
@protocol ASWebAuthenticationPresentationContextProviding;

#import <Foundation/Foundation.h>


@interface BridgedWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding>



@property (retain, nonatomic) ASWebAuthenticationSession *authenticationSession; // ivar: _authenticationSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)start;
-(id)initWithURL:(id)arg0 completion:(id)arg1 ;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg0 ;


@end


#endif