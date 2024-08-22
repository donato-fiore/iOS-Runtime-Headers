// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPQUICKTYPECACHEDNAMELOOKUP_H
#define PPQUICKTYPECACHEDNAMELOOKUP_H

@class NSArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PPQuickTypeCachedNameLookup : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    NSArray *_candidates;
}






@end


#endif