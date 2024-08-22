// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROMISE_H
#define CNPROMISE_H

@class NSString;
@protocol CNPromise;

#import <Foundation/Foundation.h>

#import "CNFuture.h"

@interface CNPromise : NSObject <CNPromise>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CNFuture *future; // ivar: _future
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)boolErrorCompletionHandlerAdapter:(SEL)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)completionHandlerAdapterWithDefaultValue:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg0 ;


@end


#endif