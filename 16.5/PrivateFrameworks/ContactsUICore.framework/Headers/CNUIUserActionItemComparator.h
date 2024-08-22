// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIUSERACTIONITEMCOMPARATOR_H
#define CNUIUSERACTIONITEMCOMPARATOR_H


#import <Foundation/Foundation.h>


@interface CNUIUserActionItemComparator : NSObject



+(id)comparatorWithActionItemGrouping:(SEL)arg0 ;
+(id)comparatorWithAlphabeticalOrderByLabel:(SEL)arg0 ;
+(id)comparatorWithAlphabeticalOrderByTargetHandle:(SEL)arg0 ;
+(id)comparatorWithPreferredLabelsFirst:(SEL)arg0 ;
+(id)scoreForUserAction:(id)arg0 ;


@end


#endif