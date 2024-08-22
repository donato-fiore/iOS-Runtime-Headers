// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTJSCONTEXTEVENTFILTER_H
#define MTJSCONTEXTEVENTFILTER_H

@class NSString, JSContext, NSError, NSOperationQueue;
@protocol MTEventFilter;

#import <Foundation/Foundation.h>


@interface MTJSContextEventFilter : NSObject <MTEventFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *functionName; // ivar: _functionName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) JSContext *jsContext; // ivar: _jsContext
@property (retain, nonatomic) NSError *lastError; // ivar: _lastError
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSString *script; // ivar: _script
@property (readonly) Class superclass;


-(id)apply:(id)arg0 ;
-(id)initWithJSContext:(id)arg0 functionName:(id)arg1 operationQueue:(id)arg2 ;
-(id)initWithScript:(id)arg0 functionName:(id)arg1 operationQueue:(id)arg2 ;
-(void)_applyFilter:(id)arg0 promise:(id)arg1 ;


@end


#endif