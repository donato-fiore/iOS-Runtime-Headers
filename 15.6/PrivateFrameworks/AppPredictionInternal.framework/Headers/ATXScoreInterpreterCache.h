// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCOREINTERPRETERCACHE_H
#define ATXSCOREINTERPRETERCACHE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXScoreInterpreterCache : NSObject

@property (readonly, nonatomic) NSArray *interpreters; // ivar: _interpreters


+(id)sharedInstance;
-(id)initInternal;
-(id)scoreInterpreterForConsumerSubType:(unsigned char)arg0 ;
-(void)resetCache;


@end


#endif