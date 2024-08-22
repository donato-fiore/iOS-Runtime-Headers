// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKDISPLAYLINKMANAGER_H
#define TKDISPLAYLINKMANAGER_H

@class CADisplayLink, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TKDisplayLinkManager : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_activeObservers;
    NSMutableDictionary *_updatedObservers;
    BOOL _hasUpdatedObservers;
    BOOL _isHandlingDisplayRefresh;
    NSUInteger _warmUpModeRequirementsCount;
}


@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) CGFloat timestamp;


+(id)currentDisplayLinkManager;
+(void)_releaseCurrentDisplayLinkManager;
-(BOOL)_isWarmUpModeEnabled;
-(id)_displayLink;
-(id)_prepareUpdatedObserversForModification;
-(id)addObserverForFrameInterval:(NSUInteger)arg0 handler:(id)arg1 ;
-(id)addObserverWithHandler:(id)arg0 ;
-(id)init;
-(void)_didAddFirstObserver;
-(void)_didRemoveLastObserver;
-(void)_displayDidRefresh:(id)arg0 ;
-(void)_setDisplayLink:(id)arg0 ;
-(void)beginRequiringWarmUpMode;
-(void)dealloc;
-(void)endRequiringWarmUpMode;
-(void)removeObserverWithToken:(id)arg0 ;


@end


#endif