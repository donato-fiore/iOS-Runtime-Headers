// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPENDINGUPDATEDISPLAYMODE_H
#define BLSHPENDINGUPDATEDISPLAYMODE_H

@class NSString;
@protocol BLSHPendingOperation;

#import <Foundation/Foundation.h>

#import "BLSHPendingUpdateDisplayMode.h"
#import "BLSHPendingDirectRampDisplayMode.h"

@interface BLSHPendingUpdateDisplayMode : NSObject <BLSHPendingOperation>



@property (getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) BLSHPendingUpdateDisplayMode *first;
@property (readonly, getter=isFullyCompleted) BOOL fullyCompleted;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDirectRamp;
@property (readonly) BOOL isTwoPhaseUpdate;
@property (readonly, weak) BLSHPendingUpdateDisplayMode *last;
@property (readonly, weak) BLSHPendingDirectRampDisplayMode *rampOperation;
@property (getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) NSInteger targetDisplayMode; // ivar: _targetDisplayMode
@property (readonly) NSInteger type;
@property (readonly, weak) BLSHPendingUpdateDisplayMode *updateOperation;


+(id)operationForUpdateFromCurrentDisplayMode:(NSInteger)arg0 toTargetDisplayMode:(NSInteger)arg1 ;
-(id)initWithTargetDisplayMode:(NSInteger)arg0 ;


@end


#endif