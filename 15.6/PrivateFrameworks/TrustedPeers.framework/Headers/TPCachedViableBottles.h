// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPCACHEDVIABLEBOTTLES_H
#define TPCACHEDVIABLEBOTTLES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TPCachedViableBottles : NSObject

@property (readonly, retain) NSArray *partialBottles; // ivar: _partialBottles
@property (readonly, retain) NSArray *viableBottles; // ivar: _viableBottles


-(id)initWithViableBottles:(id)arg0 partialBottles:(id)arg1 ;


@end


#endif