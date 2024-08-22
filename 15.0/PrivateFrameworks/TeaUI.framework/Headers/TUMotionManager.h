// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUMOTIONMANAGER_H
#define TUMOTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface TUMotionManager : NSObject {
    ? observers;
    ? operationQueue;
    ? coreMotionManager;
}




+(id)shared;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)handleReduceMotionChanged;
-(void)removeObserver:(id)arg0 ;
-(void)scenDidEnterBackground;
-(void)sceneDidBecomeActive;


@end


#endif