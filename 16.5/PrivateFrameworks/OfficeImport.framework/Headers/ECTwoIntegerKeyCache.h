// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECTWOINTEGERKEYCACHE_H
#define ECTWOINTEGERKEYCACHE_H


#import <Foundation/Foundation.h>

#import "OITSUIntegerKeyDictionary.h"

@interface ECTwoIntegerKeyCache : NSObject {
    OITSUIntegerKeyDictionary *mCache;
}


@property (nonatomic) BOOL assertForCollisions; // ivar: _assertForCollisions


-(id)init;
-(id)objectForKey1:(NSInteger)arg0 key2:(NSInteger)arg1 ;
-(void)setObject:(id)arg0 forKey1:(NSInteger)arg1 key2:(NSInteger)arg2 ;


@end


#endif