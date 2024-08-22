// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTIMERCACHE_H
#define CAMTIMERCACHE_H

@class NSMutableDictionary;
@protocol CAMTimerCacheDelegate;

#import <Foundation/Foundation.h>


@interface CAMTimerCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_timersByType; // ivar: __timersByType
@property (weak, nonatomic) NSObject<CAMTimerCacheDelegate> *delegate; // ivar: _delegate


-(BOOL)isRunningTimerForKey:(id)arg0 ;
-(id)init;
-(void)_handleTimer:(id)arg0 forKey:(id)arg1 ;
-(void)cancelAllTimers;
-(void)cancelTimerForKey:(id)arg0 ;
-(void)startTimerForKey:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif