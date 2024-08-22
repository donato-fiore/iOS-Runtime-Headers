// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDSOURCEORDERTRANSACTIONCACHE_H
#define _HDSOURCEORDERTRANSACTIONCACHE_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface _HDSourceOrderTransactionCache : NSObject {
    HDProfile *_profile;
    NSArray *_defaultOrderedSources;
    NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}




-(id)init;


@end


#endif