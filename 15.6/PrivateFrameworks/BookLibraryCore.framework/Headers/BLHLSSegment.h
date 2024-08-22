// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLHLSSEGMENT_H
#define BLHLSSEGMENT_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "BLHLSKey.h"
#import "BLHLSMap.h"

@interface BLHLSSegment : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BLHLSKey *key; // ivar: _key
@property (readonly, nonatomic) BLHLSMap *map; // ivar: _map
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)description;
-(id)initWithURL:(id)arg0 duration:(CGFloat)arg1 map:(id)arg2 key:(id)arg3 ;


@end


#endif