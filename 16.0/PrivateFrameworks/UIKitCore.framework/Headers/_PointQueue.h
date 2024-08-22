// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _POINTQUEUE_H
#define _POINTQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PointQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *nonSentinelPoints; // ivar: _nonSentinelPoints


-(NSUInteger)effectiveStartIndexBasedOnLength;
-(id)init;


@end


#endif