// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSCRUBBINGGESTUREPLATFORMADAPTER_H
#define AVSCRUBBINGGESTUREPLATFORMADAPTER_H

@protocol AVScrubbingGesturePlatformAdapterDelegate;

#import <Foundation/Foundation.h>


@interface AVScrubbingGesturePlatformAdapter : NSObject

@property (weak, nonatomic) NSObject<AVScrubbingGesturePlatformAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL gestureActive;
@property (nonatomic) BOOL gestureEnabled; // ivar: _gestureEnabled
@property (readonly, nonatomic) float timelineVelocity;


-(id)_abstractInit;


@end


#endif