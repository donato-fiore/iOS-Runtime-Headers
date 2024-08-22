// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPAPPLINKCACHEGUARDEDDATA_H
#define PPAPPLINKCACHEGUARDEDDATA_H

@class NSMutableSet, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PPAppLinkCacheGuardedData : NSObject {
    NSMutableSet *_enabledAppIDs;
    NSDictionary *_urlToAppID;
    NSMutableDictionary *_mutableURLToAppID;
}






@end


#endif