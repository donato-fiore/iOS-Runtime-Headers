// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYVISITSNEEDINGRECOMPUTEDVISITCOUNTSPREDICATE_H
#define WBSHISTORYVISITSNEEDINGRECOMPUTEDVISITCOUNTSPREDICATE_H

@class NSString;
@protocol WBSHistoryVisitPredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryVisitsNeedingRecomputedVisitCountsPredicate : NSObject <WBSHistoryVisitPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif