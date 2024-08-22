// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHINACTIVEBUDGETBUCKET_H
#define BLSHINACTIVEBUDGETBUCKET_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "BLSHInactiveBudgetBucketEntryCount.h"

@interface BLSHInactiveBudgetBucket : NSObject

@property (readonly, nonatomic) BOOL containsInvalidation; // ivar: _containsInvalidation
@property (readonly, nonatomic) BLSHInactiveBudgetBucketEntryCount *entryCount; // ivar: _entryCount
@property (readonly, nonatomic) BLSHInactiveBudgetBucketEntryCount *invalidatedEntryCount; // ivar: _invalidatedEntryCount
@property (readonly, nonatomic) NSDate *minuteBoundaryDate; // ivar: _minuteBoundaryDate
@property (readonly, nonatomic, getter=hasBeenRendered) BOOL rendered; // ivar: _rendered
@property (readonly, nonatomic) BLSHInactiveBudgetBucketEntryCount *renderedEntryCount; // ivar: _renderedEntryCount
@property (readonly, nonatomic, getter=isSecondsFidelity) BOOL secondsFidelity;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)validAtDate:(id)arg0 ;
-(CGFloat)addFutureSpecifier:(id)arg0 hasSecondsBudget:(BOOL)arg1 allowBeforeStart:(BOOL)arg2 ;
-(CGFloat)addInvalidation:(id)arg0 hasSecondsBudget:(BOOL)arg1 allowBeforeStart:(BOOL)arg2 ;
-(CGFloat)applyRenderedSpecifier:(id)arg0 allowBeforeStart:(BOOL)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithFutureSpecifier:(id)arg0 ;
-(id)initWithInvalidation:(id)arg0 ;
-(id)shortLoggingString;
-(void)resetFutureAndRenderedSpecifiers;
-(void)resetFutureSpecifiers;


@end


#endif