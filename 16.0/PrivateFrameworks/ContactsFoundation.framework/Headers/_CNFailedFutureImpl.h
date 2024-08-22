// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNFAILEDFUTUREIMPL_H
#define _CNFAILEDFUTUREIMPL_H

@class NSError, NSString;
@protocol CNFutureImpl;

#import <Foundation/Foundation.h>


@interface _CNFailedFutureImpl : NSObject <CNFutureImpl>

 {
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)initWithError:(id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(void)addFailureBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)updateDescriptionWithBuilder:(id)arg0 ;


@end


#endif