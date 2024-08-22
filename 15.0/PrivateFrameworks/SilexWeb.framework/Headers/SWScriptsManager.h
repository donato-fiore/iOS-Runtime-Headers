// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWSCRIPTSMANAGER_H
#define SWSCRIPTSMANAGER_H

@class NSString, NSMutableArray, WKWebView;
@protocol SWScriptsManager, SWLogger;

#import <Foundation/Foundation.h>


@interface SWScriptsManager : NSObject <SWScriptsManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSMutableArray *queuedExecutableScripts; // ivar: _queuedExecutableScripts
@property (nonatomic) BOOL readyToExecuteScripts; // ivar: _readyToExecuteScripts
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithWebView:(id)arg0 documentStateProvider:(id)arg1 logger:(id)arg2 ;
-(void)addScript:(id)arg0 ;
-(void)executeQueuedScripts;
-(void)executeScript:(id)arg0 ;
-(void)queueExecutableScript:(id)arg0 ;
-(void)removeAllScripts;
-(void)removeScript:(id)arg0 ;


@end


#endif