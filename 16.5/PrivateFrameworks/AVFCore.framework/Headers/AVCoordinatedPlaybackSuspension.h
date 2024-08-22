// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCOORDINATEDPLAYBACKSUSPENSION_H
#define AVCOORDINATEDPLAYBACKSUSPENSION_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "AVPlaybackCoordinator.h"

@interface AVCoordinatedPlaybackSuspension : NSObject {
    AVPlaybackCoordinator *_coordinator;
    *OpaqueFigTimelineCoordinatorSuspension _figSuspension;
    *OpaqueFigSimpleMutex _iVarMutex;
}


@property (readonly, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithCoordinator:(id)arg0 reason:(id)arg1 ;
-(struct OpaqueFigTimelineCoordinatorSuspension *)_figSuspension;
-(void)dealloc;
-(void)end;
-(void)endProposingNewTime:(struct ? )arg0 ;


@end


#endif