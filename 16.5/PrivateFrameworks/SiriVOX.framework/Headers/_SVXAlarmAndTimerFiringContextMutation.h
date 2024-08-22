// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXALARMANDTIMERFIRINGCONTEXTMUTATION_H
#define _SVXALARMANDTIMERFIRINGCONTEXTMUTATION_H

@class NSOrderedSet, NSString;
@protocol SVXAlarmAndTimerFiringContextMutating;

#import <Foundation/Foundation.h>

#import "SVXAlarmAndTimerFiringContext.h"

@interface _SVXAlarmAndTimerFiringContextMutation : NSObject <SVXAlarmAndTimerFiringContextMutating>

 {
    SVXAlarmAndTimerFiringContext *_baseModel;
    NSOrderedSet *_orderedFiringAlarms;
    NSOrderedSet *_orderedFiringTimers;
    BOOL _hasOtherRunningTimers;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setHasOtherRunningTimers:(BOOL)arg0 ;
-(void)setOrderedFiringAlarms:(id)arg0 ;
-(void)setOrderedFiringTimers:(id)arg0 ;


@end


#endif