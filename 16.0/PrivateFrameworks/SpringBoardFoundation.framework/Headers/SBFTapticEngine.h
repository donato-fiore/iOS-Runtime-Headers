// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFTAPTICENGINE_H
#define SBFTAPTICENGINE_H

@class _UITapticEngine, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBFTapticEngine : NSObject {
    _UITapticEngine *_tapticEngine;
    NSMutableSet *_previewReasons;
    NSMutableSet *_commitReasons;
    NSMutableSet *_cancelledReasons;
    NSObject<OS_dispatch_queue> *_previewReasonsQueue;
    NSObject<OS_dispatch_queue> *_commitReasonsQueue;
    NSObject<OS_dispatch_queue> *_cancelledReasonsQueue;
}


@property (readonly, nonatomic) BOOL supportsFeedbackActuation; // ivar: _supportsFeedbackActuation


+(id)sharedInstance;
-(id)init;
-(void)actuateFeedback:(NSInteger)arg0 ;
-(void)coolDownForFeedback:(NSUInteger)arg0 withReason:(id)arg1 ;
-(void)warmUpForFeedback:(NSUInteger)arg0 withReason:(id)arg1 ;


@end


#endif