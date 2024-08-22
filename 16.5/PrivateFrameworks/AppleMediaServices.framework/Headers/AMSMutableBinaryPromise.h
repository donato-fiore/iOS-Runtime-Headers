// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMUTABLEBINARYPROMISE_H
#define AMSMUTABLEBINARYPROMISE_H



#import "AMSBinaryPromise.h"

@interface AMSMutableBinaryPromise : AMSBinaryPromise



+(BOOL)cancelPromise:(id)arg0 ;
+(BOOL)finishPromise:(id)arg0 withError:(id)arg1 ;
+(BOOL)finishPromise:(id)arg0 withPromise:(id)arg1 ;
+(BOOL)finishPromise:(id)arg0 withSuccess:(BOOL)arg1 ;
+(BOOL)finishPromise:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithPromise:(id)arg0 ;
-(BOOL)finishWithSuccess;
-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;


@end


#endif