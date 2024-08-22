// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTSUPPORTSUBSYSTEMCATEGORYALLOWLIST_H
#define SIGNPOSTSUPPORTSUBSYSTEMCATEGORYALLOWLIST_H



#import "SignpostSupportSubsystemCategoryFilter.h"

@interface SignpostSupportSubsystemCategoryAllowlist : SignpostSupportSubsystemCategoryFilter



-(BOOL)_wantsNotSubsystem;
-(BOOL)passesSubsystem:(id)arg0 category:(id)arg1 ;
-(NSUInteger)_compoundPredicateType;
-(id)initWithEntries:(id)arg0 ;
-(void)_forceInclusionOfSubsystem:(id)arg0 category:(id)arg1 ;


@end


#endif