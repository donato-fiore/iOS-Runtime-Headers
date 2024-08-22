// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDAMAILACCOUNTCONSUMER_H
#define MFDAMAILACCOUNTCONSUMER_H

@class NSConditionLock;
@protocol DAActionConsumer;

#import <Foundation/Foundation.h>


@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer>

 {
    NSConditionLock *_doneCondition;
    BOOL _shouldRetryRequest;
    BOOL _alwaysReportFailures;
}




-(BOOL)shouldRetryRequest;
-(BOOL)waitUntilDoneBeforeDate:(id)arg0 ;
-(id)init;
-(id)initWithAlwaysReportFailures:(BOOL)arg0 ;
-(void)actionFailed:(NSInteger)arg0 forTask:(id)arg1 error:(id)arg2 ;
-(void)setDone:(BOOL)arg0 ;
-(void)taskFailed:(id)arg0 statusCode:(NSInteger)arg1 error:(id)arg2 ;
-(void)waitUntilDone;


@end


#endif