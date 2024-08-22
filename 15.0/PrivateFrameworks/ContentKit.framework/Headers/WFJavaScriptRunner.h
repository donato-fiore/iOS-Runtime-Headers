// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFJAVASCRIPTRUNNER_H
#define WFJAVASCRIPTRUNNER_H

@class WFSingleConnectionXPCListener, NSString, NSItemProvider;
@protocol NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol;



@interface WFJavaScriptRunner : WFSingleConnectionXPCListener <NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (readonly) Class superclass;


-(id)initWithItemProvider:(id)arg0 ;
-(void)runJavaScript:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif