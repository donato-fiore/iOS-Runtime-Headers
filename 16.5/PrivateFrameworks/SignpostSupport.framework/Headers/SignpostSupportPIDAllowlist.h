// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTPIDALLOWLIST_H
#define SIGNPOSTSUPPORTPIDALLOWLIST_H



#import "SignpostSupportPIDFilter.h"

@interface SignpostSupportPIDAllowlist : SignpostSupportPIDFilter



-(BOOL)_wantsNotEqual;
-(BOOL)passesPIDNumber:(id)arg0 ;
-(NSUInteger)_compoundPredicateType;


@end


#endif