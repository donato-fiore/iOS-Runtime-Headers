// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FBSCDHASHCACHEINFO_H
#define _FBSCDHASHCACHEINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _FBSCDHashCacheInfo : NSObject

@property (readonly, nonatomic) NSData *cachedCodeDirectoryHash; // ivar: _cachedCodeDirectoryHash
@property (readonly, nonatomic) unsigned int cachedCodeDirectoryHashType; // ivar: _cachedCodeDirectoryHashType


+(id)cacheInfoWithData:(id)arg0 hashType:(unsigned int)arg1 ;


@end


#endif