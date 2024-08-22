// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTSUBSYSTEMCATEGORYWHITELIST_H
#define SIGNPOSTSUPPORTSUBSYSTEMCATEGORYWHITELIST_H



#import "SignpostSupportSubsystemCategoryFilter.h"

@interface SignpostSupportSubsystemCategoryWhitelist : SignpostSupportSubsystemCategoryFilter



-(BOOL)_wantsNotSubsystem;
-(BOOL)passesSubsystem:(id)arg0 category:(id)arg1 ;
-(NSUInteger)_compoundPredicateType;
-(id)initWithEntries:(id)arg0 ;
-(void)_forceInclusionOfSubsystem:(id)arg0 category:(id)arg1 ;


@end


#endif