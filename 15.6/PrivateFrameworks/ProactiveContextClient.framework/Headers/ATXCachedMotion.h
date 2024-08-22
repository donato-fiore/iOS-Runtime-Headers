// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCACHEDMOTION_H
#define ATXCACHEDMOTION_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "ATXMotion.h"

@interface ATXCachedMotion : NSObject {
    NSDate *lastUpdated;
}


@property (readonly, copy, nonatomic) ATXMotion *currentMotion; // ivar: _currentMotion


-(BOOL)isExpired;
-(id)initWithATXMotion:(id)arg0 ;
-(void)update:(id)arg0 ;


@end


#endif