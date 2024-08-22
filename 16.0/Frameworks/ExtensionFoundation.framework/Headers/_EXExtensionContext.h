// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONCONTEXT_H
#define _EXEXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol _EXConnectionHandler;



@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>





-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)init;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)completeRequestReturningItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)completeRequestWithHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif