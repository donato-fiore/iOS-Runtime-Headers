// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPURCHASELOOKUPENTRIESMANAGER_H
#define FCPURCHASELOOKUPENTRIESMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"

@interface FCPurchaseLookUpEntriesManager : NSObject {
    FCKeyValueStore *_localStore;
    NSMutableDictionary *_entriesByTagID;
}






@end


#endif