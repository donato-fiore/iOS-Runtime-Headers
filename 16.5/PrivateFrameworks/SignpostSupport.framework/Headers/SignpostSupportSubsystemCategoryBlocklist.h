// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTSUBSYSTEMCATEGORYBLOCKLIST_H
#define SIGNPOSTSUPPORTSUBSYSTEMCATEGORYBLOCKLIST_H



#import "SignpostSupportSubsystemCategoryFilter.h"

@interface SignpostSupportSubsystemCategoryBlocklist : SignpostSupportSubsystemCategoryFilter



-(BOOL)_wantsNotSubsystem;
-(BOOL)passesSubsystem:(id)arg0 category:(id)arg1 ;
-(NSUInteger)_compoundPredicateType;
-(id)initWithEntries:(id)arg0 ;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg0 category:(id)arg1 ;


@end


#endif