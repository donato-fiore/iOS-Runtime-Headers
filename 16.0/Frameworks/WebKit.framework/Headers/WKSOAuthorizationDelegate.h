// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSOAUTHORIZATIONDELEGATE_H
#define WKSOAUTHORIZATIONDELEGATE_H

@class NSString;
@protocol SOAuthorizationDelegate;

#import <Foundation/Foundation.h>


@interface WKSOAuthorizationDelegate : NSObject <SOAuthorizationDelegate>

 {
    RefPtr<WebKit::SOAuthorizationSession, WTF::RawPtrTraits<WebKit::SOAuthorizationSession>, WTF::DefaultRefDerefTraits<WebKit::SOAuthorizationSession>> _session;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)authorization:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)authorization:(id)arg0 presentViewController:(id)arg1 withCompletion:(id)arg2 ;
-(void)authorizationDidCancel:(id)arg0 ;
-(void)authorizationDidComplete:(id)arg0 ;
-(void)authorizationDidNotHandle:(id)arg0 ;
-(void)setSession:(*void)arg0 ;


@end


#endif