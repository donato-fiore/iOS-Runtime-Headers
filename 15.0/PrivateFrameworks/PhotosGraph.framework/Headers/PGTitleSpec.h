// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTITLESPEC_H
#define PGTITLESPEC_H

@class NSArray, NSString;
@protocol PGTitleSpecDelegate;

#import <Foundation/Foundation.h>


@interface PGTitleSpec : NSObject

@property (retain) NSArray *arguments; // ivar: _arguments
@property (weak) NSObject<PGTitleSpecDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *format; // ivar: _format
@property BOOL hasLineBreak; // ivar: _hasLineBreak
@property BOOL hasSpecArgumentHandlingLineBreakBehavior; // ivar: _hasSpecArgumentHandlingLineBreakBehavior
@property BOOL insertNonBreakableSpace; // ivar: _insertNonBreakableSpace
@property (readonly) NSInteger titleCategory; // ivar: _titleCategory
@property NSUInteger weekdayCriteria; // ivar: _weekdayCriteria


+(NSInteger)_weekdayForWeekdayCriteria:(NSUInteger)arg0 ;
+(id)specWithFormat:(id)arg0 titleCategory:(NSInteger)arg1 ;
-(BOOL)_canFulfillWeekdayCriteriaWithMomentNodes:(id)arg0 ;
-(BOOL)_resolveRequiredInputForArgument:(id)arg0 ;
-(id)_appendArguments:(id)arg0 toFormatString:(id)arg1 ;
-(id)_titleWithResolvedArguments:(id)arg0 ;
-(id)description;
-(id)initWithFormat:(id)arg0 titleCategory:(NSInteger)arg1 ;
-(id)titleWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)titleWithMomentNodes:(id)arg0 features:(id)arg1 argumentEvaluationContext:(id)arg2 ;


@end


#endif