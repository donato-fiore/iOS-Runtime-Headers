// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMPROMISE_H
#define FMPROMISE_H

@class NSString;
@protocol FMPromise;

#import <Foundation/Foundation.h>

#import "FMFuture.h"

@interface FMPromise : NSObject <FMPromise>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) FMFuture *future; // ivar: _future
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