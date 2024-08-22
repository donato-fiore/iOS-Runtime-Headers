// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTBIPARTITEMATCHER_H
#define FTBIPARTITEMATCHER_H


#import <Foundation/Foundation.h>


@interface FTBipartiteMatcher : NSObject {
    unique_ptr<ft::HungarianMatcher, std::default_delete<ft::HungarianMatcher>> _optimizer;
}




-(id)computeMatchingForCostMatrix:(*float)arg0 withRowCount:(NSUInteger)arg1 columnCount:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithInitialSize:(NSUInteger)arg0 ;


@end


#endif