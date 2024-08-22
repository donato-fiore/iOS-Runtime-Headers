// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENTITYMAPCACHE_H
#define ENTITYMAPCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EntityMapCache : NSObject {
    NSMutableDictionary *_uuidMap;
}


@property unsigned int capacityLimit; // ivar: _capacityLimit
@property CGFloat hitRetainTime; // ivar: _hitRetainTime
@property CGFloat missRetainTime; // ivar: _missRetainTime
@property unsigned int pruneSize; // ivar: _pruneSize


-(id)description;
-(id)entryForUUID:(id)arg0 ;
-(id)init;
-(id)stateDictionary;
-(void)pruneCache;
-(void)setEntry:(id)arg0 forUUID:(id)arg1 ;


@end


#endif