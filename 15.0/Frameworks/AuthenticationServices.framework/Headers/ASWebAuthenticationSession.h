// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASWEBAUTHENTICATIONSESSION_H
#define ASWEBAUTHENTICATIONSESSION_H

@class SFAuthenticationSession;
@protocol ASWebAuthenticationPresentationContextProviding;

#import <Foundation/Foundation.h>

#import "ASWebAuthenticationSession.h"

@interface ASWebAuthenticationSession : NSObject {
    SFAuthenticationSession *_authenticationSession;
    id *_originalCompletionHandler;
    ASWebAuthenticationSession *_referenceToSelf;
}


@property (readonly, nonatomic) BOOL canStart;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession; // ivar: _prefersEphemeralWebBrowserSession
@property (weak, nonatomic) NSObject<ASWebAuthenticationPresentationContextProviding> *presentationContextProvider; // ivar: _presentationContextProvider


-(BOOL)_startDryRun:(BOOL)arg0 ;
-(BOOL)start;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 usingEphemeralSession:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_invalidate;
-(void)cancel;


@end


#endif