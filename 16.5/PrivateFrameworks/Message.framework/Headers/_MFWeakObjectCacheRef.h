// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFWEAKOBJECTCACHEREF_H
#define _MFWEAKOBJECTCACHEREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MFWeakObjectCache.h"

@interface _MFWeakObjectCacheRef : NSObject

@property (weak, nonatomic) MFWeakObjectCache *cache; // ivar: _cache
@property (copy, nonatomic) NSObject<NSCopying> *key; // ivar: _key


-(void)dealloc;


@end


#endif