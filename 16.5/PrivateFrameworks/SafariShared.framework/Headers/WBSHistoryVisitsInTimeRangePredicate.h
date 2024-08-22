// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYVISITSINTIMERANGEPREDICATE_H
#define WBSHISTORYVISITSINTIMERANGEPREDICATE_H

@class NSString, NSData;
@protocol WBSHistoryVisitPredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryVisitsInTimeRangePredicate : NSObject <WBSHistoryVisitPredicate>

 {
    CGFloat _startTime;
    CGFloat _endTime;
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 urlString:(id)arg2 urlHash:(id)arg3 urlSalt:(id)arg4 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif