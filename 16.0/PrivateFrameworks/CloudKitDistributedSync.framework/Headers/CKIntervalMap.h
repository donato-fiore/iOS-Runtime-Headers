// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINTERVALMAP_H
#define CKINTERVALMAP_H


#import <Foundation/Foundation.h>

#import "CKIntervalMapRangeMapContainer.h"

@interface CKIntervalMap : NSObject

@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (readonly, nonatomic) CKIntervalMapRangeMapContainer *rangeMap; // ivar: _rangeMap


-(BOOL)containsIndex:(NSUInteger)arg0 ;
-(BOOL)containsIndexes:(id)arg0 ;
-(id)allIndexes;
-(id)description;
-(id)init;
-(void)enumerateObjectsForIndexes:(id)arg0 usingBlock:(id)arg1 ;
-(void)maintainInvariants;


@end


#endif