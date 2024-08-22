// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHFLIPBOOKHISTORY_H
#define BLSHFLIPBOOKHISTORY_H

@class NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BLSHFlipbookHistory : NSObject {
    NSUInteger _frameLimit;
    NSUInteger _memoryLimit;
    NSMutableArray *_lock_frames;
    NSMutableDictionary *_lock_framesDict;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *allFrames;
@property (readonly, nonatomic) NSUInteger memoryUsage;


-(id)frameWithUUID:(id)arg0 ;
-(id)initWithFrameLimit:(NSUInteger)arg0 memoryLimit:(NSUInteger)arg1 ;
-(void)addRenderedFrameToHistory:(id)arg0 ;


@end


#endif