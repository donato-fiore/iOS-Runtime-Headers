// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNGEMINIBADGE_H
#define CNGEMINIBADGE_H

@class NSDictionary;


#import "CNLabeledBadge.h"

@interface CNGeminiBadge : CNLabeledBadge

@property (copy, nonatomic) NSDictionary *viewAttributes;


+(id)geminiBadgeWithText:(id)arg0 ;


@end


#endif