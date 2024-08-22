// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGAWORKER_H
#define CCVEGAWORKER_H

@class NSMutableDictionary, JSContext, JSVirtualMachine;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CCVegaWorkerClient.h"
#import "CCVegaJSDocument.h"

@interface CCVegaWorker : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _currentTimerIndex;
    NSMutableDictionary *_timers;
    BOOL _vegaLiteLoaded;
    BOOL _vegaParserLoaded;
}


@property (retain) JSContext *context; // ivar: context
@property (weak) CCVegaWorkerClient *currentClient; // ivar: currentClient
@property (readonly) NSUInteger dispatchQueueID; // ivar: _dispatchQueueID
@property (retain, nonatomic) CCVegaJSDocument *document; // ivar: document
@property (copy) id *onDealloc; // ivar: _onDealloc
@property (retain) JSVirtualMachine *virtualMachine; // ivar: virtualMachine


+(id)sharedWorker;
+(void)cleanUp;
+(void)cleanUpWithCallback:(id)arg0 ;
-(id)dispatchQueue;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(int)nextTimerIndex;
-(void)dealloc;
// -(void)registerExpressionFunction:(id)arg0 withName:(unk)arg1  ;
-(void)registerProxyExpressionFunction:(id)arg0 ;
-(void)requireVegaLite;
-(void)requireVegaParser;
-(void)setupConsole;
-(void)setupContext;
-(void)setupTimerFunctions;
-(void)waitForWorker;


@end


#endif