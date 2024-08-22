// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERDESCRIPTORCACHEGUARDEDDATA_H
#define ATXPOSTERDESCRIPTORCACHEGUARDEDDATA_H

@class NSDictionary, NSHashTable;

#import <Foundation/Foundation.h>


@interface ATXPosterDescriptorCacheGuardedData : NSObject {
    NSDictionary *descriptors;
    NSHashTable *observers;
}




-(id)init;


@end


#endif