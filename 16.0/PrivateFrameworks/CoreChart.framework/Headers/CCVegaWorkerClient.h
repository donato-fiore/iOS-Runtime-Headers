// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGAWORKERCLIENT_H
#define CCVEGAWORKERCLIENT_H

@class NSMutableDictionary;
@protocol CCVegaWorkerClientDelegate;

#import <Foundation/Foundation.h>

#import "CCVegaWorker.h"

@interface CCVegaWorkerClient : NSObject {
    NSMutableDictionary *_expressionFunctions;
}


@property (weak) NSObject<CCVegaWorkerClientDelegate> *delegate; // ivar: delegate
@property BOOL isValid; // ivar: isValid
@property (retain) CCVegaWorker *worker; // ivar: worker


-(id)evaluateExpressionFunction:(id)arg0 ;
-(id)initWithWorker:(id)arg0 delegate:(id)arg1 ;
-(void)clientDidExecuteTimerCallback;
-(void)clientEnter;
-(void)clientExit;
// -(void)registerExpressionFunction:(id)arg0 withName:(unk)arg1  ;
-(void)runBlockAsync:(id)arg0 ;
-(void)runBlockSync:(id)arg0 ;
-(void)waitForWorker;


@end


#endif