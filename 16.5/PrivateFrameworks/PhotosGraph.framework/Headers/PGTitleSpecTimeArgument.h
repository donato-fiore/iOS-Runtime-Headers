// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTITLESPECTIMEARGUMENT_H
#define PGTITLESPECTIMEARGUMENT_H



#import "PGTitleSpecArgument.h"

@interface PGTitleSpecTimeArgument : PGTitleSpecArgument

@property (readonly) NSUInteger type; // ivar: _type


+(id)argumentWithTimeType:(NSUInteger)arg0 ;
-(id)_anniversaryTitleWithMomentNodes:(id)arg0 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg0 ;
-(id)_holidayTitleWithMomentNodes:(id)arg0 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 features:(id)arg1 argumentEvaluationContext:(id)arg2 ;
-(id)_yearsAgoStringWithEventNodes:(id)arg0 relativeToDateComponents:(id)arg1 ;
-(id)_yearsAgoTitle;
-(id)initWithTimeType:(NSUInteger)arg0 ;


@end


#endif