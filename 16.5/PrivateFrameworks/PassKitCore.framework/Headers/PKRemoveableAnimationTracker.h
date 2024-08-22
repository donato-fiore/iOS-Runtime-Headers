// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOVEABLEANIMATIONTRACKER_H
#define PKREMOVEABLEANIMATIONTRACKER_H

@class NSString, CALayer;

#import <Foundation/Foundation.h>


@interface PKRemoveableAnimationTracker : NSObject {
    BOOL _removed;
    BOOL _finished;
    BOOL _tracked;
    BOOL _preemptAttempted;
    id *_preemptAction;
}


@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, weak, nonatomic) CALayer *layer; // ivar: _layer


+(id)createForAnimation:(id)arg0 inLayer:(id)arg1 store:(id)arg2 ;
+(id)createForAnimation:(id)arg0 inLayer:(id)arg1 store:(id)arg2 withPreemptAction:(id)arg3 ;
// +(id)createForAnimation:(id)arg0 inLayer:(id)arg1 store:(id)arg2 withPreemptAction:(id)arg3 completionAction:(unk)arg4  ;
-(id)init;
-(void)preempt;
-(void)remove;


@end


#endif