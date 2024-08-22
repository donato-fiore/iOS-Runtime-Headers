// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNCONSTANTFUTUREIMPL_H
#define _CNCONSTANTFUTUREIMPL_H

@class NSString;
@protocol CNFutureImpl;

#import <Foundation/Foundation.h>


@interface _CNConstantFutureImpl : NSObject <CNFutureImpl>

 {
    id *_result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)initWithResult:(id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(void)addFailureBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)updateDescriptionWithBuilder:(id)arg0 ;


@end


#endif