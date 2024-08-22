// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMREMOTECONTENTURLSCHEMEHANDLER_H
#define EMREMOTECONTENTURLSCHEMEHANDLER_H

@class NSString;
@protocol WKURLSchemeHandler, EFScheduler;

#import <Foundation/Foundation.h>

#import "EMRemoteContentURLSession.h"

@interface EMRemoteContentURLSchemeHandler : NSObject <WKURLSchemeHandler>

 {
    id<EFScheduler> *_scheduler;
    EMRemoteContentURLSession *_session;
}


@property (readonly, nonatomic) BOOL allowProxying; // ivar: _allowProxying
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *remoteContentHTTPSScheme;
@property (readonly, nonatomic) NSString *remoteContentHTTPScheme;
@property (readonly, nonatomic) NSString *schemePrefix; // ivar: _schemePrefix
@property (readonly) Class superclass;


+(id)dataTaskForRequest:(id)arg0 withSchemePrefix:(id)arg1 session:(id)arg2 scheduler:(id)arg3 allowProxying:(BOOL)arg4 cancelationToken:(*id)arg5 completionHandler:(id)arg6 ;
-(id)initWithSession:(id)arg0 schemePrefix:(id)arg1 allowProxying:(BOOL)arg2 ;
-(void)setOnWebViewConfiguration:(id)arg0 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif