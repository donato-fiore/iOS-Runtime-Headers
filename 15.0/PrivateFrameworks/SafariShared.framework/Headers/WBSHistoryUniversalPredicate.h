// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYUNIVERSALPREDICATE_H
#define WBSHISTORYUNIVERSALPREDICATE_H

@class NSString;
@protocol WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryUniversalPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateServiceTombstone:(id)arg0 ;
-(BOOL)evaluateServiceVisit:(id)arg0 ;
-(BOOL)evaluateTombstone:(id)arg0 ;
-(BOOL)evaluateVisit:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif