// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSYNCEDULTRAWIDEFORWARDINGSTRATEGY_H
#define ARSYNCEDULTRAWIDEFORWARDINGSTRATEGY_H

@class NSString;
@protocol ARTechniqueForwardingStrategy;

#import <Foundation/Foundation.h>

#import "ARCircularArray.h"

@interface ARSyncedUltraWideForwardingStrategy : NSObject <ARTechniqueForwardingStrategy>

 {
    ARCircularArray *_mostRecentTimestamps;
    os_unfair_lock_s _mostRecentTimestampsLock;
    NSInteger _maxFrameRate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)frameRateLimitAllowsProcessingThisData:(id)arg0 mostRecentTimestamps:(id)arg1 maxFrameRate:(NSInteger)arg2 ;
-(BOOL)shouldProcessData:(id)arg0 ;
-(BOOL)shouldRequestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)initWithMaxFrameRate:(NSInteger)arg0 ;


@end


#endif