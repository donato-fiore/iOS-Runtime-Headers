// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPEITEMCACHE_H
#define PPQUICKTYPEITEMCACHE_H

@class NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PPQuickTypeItemCache : NSObject {
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_entries;
}




-(id)init;
-(void)setEntry:(id)arg0 key:(id)arg1 ;


@end


#endif