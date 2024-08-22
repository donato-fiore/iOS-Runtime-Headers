// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKSCRIPTSEVALUATOR_H
#define IKSCRIPTSEVALUATOR_H

@class JSManagedValue, NSString, NSNumber, NSMutableArray, NSArray;
@protocol ISStoreURLOperationDelegate, NSURLConnectionDataDelegate;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate>



@property (weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) JSManagedValue *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isJingleRequest; // ivar: _isJingleRequest
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records
@property (retain, nonatomic) NSArray *scripts; // ivar: _scripts
@property (readonly) Class superclass;


-(id)initWithScripts:(id)arg0 withContext:(id)arg1 callback:(id)arg2 jingleRequest:(BOOL)arg3 ;
-(void)_operation:(id)arg0 finishedWithResult:(id)arg1 error:(id)arg2 ;
-(void)_sendCallback:(id)arg0 inContext:(id)arg1 success:(BOOL)arg2 ;
-(void)evaluate;
-(void)evaluateScripts;
-(void)handleScirptLoadFailure;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
// -(void)parseScriptData:(id)arg0 successPredicate:(id)arg1 completion:(unk)arg2  ;
-(void)scriptDidLoadWithID:(id)arg0 data:(id)arg1 error:(id)arg2 ;


@end


#endif