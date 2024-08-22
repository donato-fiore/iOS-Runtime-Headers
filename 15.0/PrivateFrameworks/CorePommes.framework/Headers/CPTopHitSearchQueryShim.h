// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPTOPHITSEARCHQUERYSHIM_H
#define CPTOPHITSEARCHQUERYSHIM_H

@class NSArray;


#import "CPSearchQueryShim.h"

@interface CPTopHitSearchQueryShim : CPSearchQueryShim

@property (copy) NSArray *filterQueries;
@property (copy) NSArray *protectionClasses;


+(id)log;
-(id)initWithSearchString:(id)arg0 keyboardLanguage:(id)arg1 attributes:(id)arg2 hitCount:(NSUInteger)arg3 ;
-(void)userEngagedWithResult:(id)arg0 interactionType:(int)arg1 ;


@end


#endif