// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYPROFILEFILTER_H
#define HFACCESSORYPROFILEFILTER_H


#import <Foundation/Foundation.h>


@interface HFAccessoryProfileFilter : NSObject



+(BOOL)_shouldIncludeObject:(id)arg0 passingNullableFilterSet:(id)arg1 ;
+(BOOL)_shouldIncludeObjectPassingFilter:(BOOL)arg0 shouldApplyFilter:(BOOL)arg1 ;
+(id)filterProfiles:(id)arg0 options:(id)arg1 ;


@end


#endif