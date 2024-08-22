// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANSFETCHERREQUEST_H
#define PKPAYLATERFINANCINGPLANSFETCHERREQUEST_H

@class NSMutableArray, NSDate;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlansFetcherRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)coalesceRequest:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 completion:(id)arg1 ;
-(void)callCompletionsWithResult:(id)arg0 ;


@end


#endif