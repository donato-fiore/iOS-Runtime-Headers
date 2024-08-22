// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYVISITSANDTOMBSTONESINSYNCWINDOWPREDICATE_H
#define WBSHISTORYVISITSANDTOMBSTONESINSYNCWINDOWPREDICATE_H

@class NSString;
@protocol WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate;

#import <Foundation/Foundation.h>


@interface WBSHistoryVisitsAndTombstonesInSyncWindowPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate>

 {
    CGFloat _referenceDate;
    NSInteger _lastSyncedGeneration;
}


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
-(id)initWithSyncWindow:(CGFloat)arg0 lastSyncedGeneration:(NSInteger)arg1 ;
-(id)statementForDatabase:(id)arg0 cache:(id)arg1 fetchOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif