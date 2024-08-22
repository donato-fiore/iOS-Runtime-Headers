// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWDOCUMENTSTATEMANAGER_H
#define SWDOCUMENTSTATEMANAGER_H

@class NSString, NSMutableArray, NFStateMachine, WKUserContentController;
@protocol WKScriptMessageHandler, SWDocumentStateProviding, SWDocumentStateReporting;

#import <Foundation/Foundation.h>


@interface SWDocumentStateManager : NSObject <WKScriptMessageHandler, SWDocumentStateProviding, SWDocumentStateReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *onLoadBlocks; // ivar: _onLoadBlocks
@property (readonly, nonatomic) NSMutableArray *onReadyBlocks; // ivar: _onReadyBlocks
@property (readonly, nonatomic) NSMutableArray *onUnloadBlocks; // ivar: _onUnloadBlocks
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserContentController *userContentController; // ivar: _userContentController


-(id)initWithUserContentController:(id)arg0 ;
-(void)documentIsReady;
-(void)documentStartedLoading;
-(void)documentWillUnload;
-(void)onLoad:(id)arg0 ;
-(void)onReady:(id)arg0 ;
-(void)onUnload:(id)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif