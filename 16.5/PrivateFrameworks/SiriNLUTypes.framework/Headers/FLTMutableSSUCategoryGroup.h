// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTMUTABLESSUCATEGORYGROUP_H
#define FLTMUTABLESSUCATEGORYGROUP_H

@class NSString, NSArray;


#import "FLTSSUCategoryGroup.h"

@interface FLTMutableSSUCategoryGroup : FLTSSUCategoryGroup

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *negative_examples;
@property (copy, nonatomic) NSArray *positive_intents;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif