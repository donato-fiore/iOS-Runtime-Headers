// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADSTATUSCONDITIONS_H
#define ADSTATUSCONDITIONS_H


#import <Foundation/Foundation.h>


@interface ADStatusConditions : NSObject



+(void)clearStatusCondition:(id)arg0 completionHandler:(id)arg1 ;
+(void)isStatusConditionRegistered:(id)arg0 bundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)setStatusCondition:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif