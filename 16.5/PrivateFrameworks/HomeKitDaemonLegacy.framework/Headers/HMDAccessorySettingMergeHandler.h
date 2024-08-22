// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGMERGEHANDLER_H
#define HMDACCESSORYSETTINGMERGEHANDLER_H


#import <Foundation/Foundation.h>


@interface HMDAccessorySettingMergeHandler : NSObject



+(BOOL)_extractMinMaxStep:(id)arg0 minConstraint:(*id)arg1 maxConstraint:(*id)arg2 stepConstraint:(*id)arg3 first:(id)arg4 ;
+(BOOL)_isNumber:(id)arg0 betweenStart:(id)arg1 andEnd:(id)arg2 first:(id)arg3 ;
+(BOOL)mergeFirst:(id)arg0 second:(id)arg1 mergeStrategy:(id)arg2 shouldAddMissing:(BOOL)arg3 ;
+(id)_mergeFirst:(id)arg0 second:(id)arg1 mergedConstraints:(id)arg2 mergeStrategy:(id)arg3 ;
+(id)_mergeRangeConstraintsFirst:(id)arg0 second:(id)arg1 shouldAddMissing:(BOOL)arg2 ;
+(id)_mergeValidValueConstraintsFirst:(id)arg0 second:(id)arg1 shouldAddMissing:(BOOL)arg2 ;


@end


#endif