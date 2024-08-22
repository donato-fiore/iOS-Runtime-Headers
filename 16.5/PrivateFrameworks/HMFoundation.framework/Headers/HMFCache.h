// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFCACHE_H
#define HMFCACHE_H

@class NSURL;


#import "HMFObject.h"

@interface HMFCache : HMFObject

@property (readonly, copy) NSURL *URL; // ivar: _URL
@property (readonly, getter=isExists) BOOL exists; // ivar: _exists


+(id)defaultCache;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif