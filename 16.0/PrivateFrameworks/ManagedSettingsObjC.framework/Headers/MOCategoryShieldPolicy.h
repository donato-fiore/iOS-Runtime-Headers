// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOCATEGORYSHIELDPOLICY_H
#define MOCATEGORYSHIELDPOLICY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MOCategoryShieldPolicy : NSObject

@property (readonly) NSArray *excludedContent; // ivar: _excludedContent
@property (readonly) NSInteger policy; // ivar: _policy
@property (readonly) NSArray *specificCategories; // ivar: _specificCategories


+(id)nonePolicy;
-(id)initWithPolicy:(NSInteger)arg0 specificCategories:(id)arg1 excludedContent:(id)arg2 ;


@end


#endif