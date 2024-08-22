// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINACTIVEBUDGETBUCKETENTRYCOUNT_H
#define BLSHINACTIVEBUDGETBUCKETENTRYCOUNT_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLSHInactiveBudgetBucketEntryCount : NSObject <NSCopying>



@property (readonly, nonatomic) int count; // ivar: _count
@property (readonly, nonatomic) NSDate *lastEntryFinalDate; // ivar: _lastEntryFinalDate
@property (readonly, nonatomic) NSDate *lastEntryInitialDate; // ivar: _lastEntryInitialDate
@property (readonly, nonatomic, getter=isSecondsFidelity) BOOL secondsFidelity; // ivar: _secondsFidelity


-(BOOL)countSpecifier:(id)arg0 hasSecondsBudget:(BOOL)arg1 isCoalesceAllowed:(BOOL)arg2 ;
-(CGFloat)timeIntervalFromLastEntryToDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif