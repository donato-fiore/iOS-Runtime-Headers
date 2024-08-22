// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERCONFIGURATIONCACHEGUARDEDDATA_H
#define ATXPOSTERCONFIGURATIONCACHEGUARDEDDATA_H

@class NSArray, NSHashTable;

#import <Foundation/Foundation.h>


@interface ATXPosterConfigurationCacheGuardedData : NSObject {
    NSArray *configurations;
    NSHashTable *observers;
}




-(id)init;


@end


#endif