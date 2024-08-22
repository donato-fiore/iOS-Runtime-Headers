// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFCACHE_H
#define CARPFCACHE_H

@class NSURL;


#import "CARPFObject.h"

@interface CARPFCache : CARPFObject

@property (readonly, copy) NSURL *URL; // ivar: _URL
@property (readonly, getter=isExists) BOOL exists; // ivar: _exists


+(id)defaultCache;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif