// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPEITEMCACHEENTRY_H
#define PPQUICKTYPEITEMCACHEENTRY_H

@class NSArray, PPQuickTypeQuery, NSDate;

#import <Foundation/Foundation.h>


@interface PPQuickTypeItemCacheEntry : NSObject {
    NSArray *items;
    PPQuickTypeQuery *query;
    NSDate *cachedAtDate;
}






@end


#endif