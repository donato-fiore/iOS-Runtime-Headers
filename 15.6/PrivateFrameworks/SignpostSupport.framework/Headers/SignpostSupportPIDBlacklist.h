// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTSUPPORTPIDBLACKLIST_H
#define SIGNPOSTSUPPORTPIDBLACKLIST_H



#import "SignpostSupportPIDFilter.h"

@interface SignpostSupportPIDBlacklist : SignpostSupportPIDFilter



-(BOOL)_wantsNotEqual;
-(BOOL)passesPIDNumber:(id)arg0 ;
-(NSUInteger)_compoundPredicateType;


@end


#endif