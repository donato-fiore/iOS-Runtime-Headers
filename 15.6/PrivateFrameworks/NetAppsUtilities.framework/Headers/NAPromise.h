// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAPROMISE_H
#define NAPROMISE_H

@class NSString;
@protocol NAPromise;

#import <Foundation/Foundation.h>

#import "NAFuture.h"

@interface NAPromise : NSObject <NAPromise>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) NAFuture *future; // ivar: _future
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithNoResult;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)init;
-(id)initWithFuture:(id)arg0 ;


@end


#endif