// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCORENSURLSESSIONTASKMETRICS_H
#define WEBCORENSURLSESSIONTASKMETRICS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> _transactionMetrics;
}


@property (readonly, copy) NSArray *transactionMetrics;


-(id)_initWithMetrics:(*void)arg0 ;
-(void)dealloc;


@end


#endif