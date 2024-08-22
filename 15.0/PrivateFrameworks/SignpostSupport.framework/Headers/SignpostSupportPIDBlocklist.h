// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTSUPPORTPIDBLOCKLIST_H
#define SIGNPOSTSUPPORTPIDBLOCKLIST_H



#import "SignpostSupportPIDFilter.h"

@interface SignpostSupportPIDBlocklist : SignpostSupportPIDFilter



-(BOOL)_wantsNotEqual;
-(BOOL)passesPIDNumber:(id)arg0 ;
-(NSUInteger)_compoundPredicateType;


@end


#endif