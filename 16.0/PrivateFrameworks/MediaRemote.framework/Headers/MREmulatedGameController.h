// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MREMULATEDGAMECONTROLLER_H
#define MREMULATEDGAMECONTROLLER_H

@class GCController;
@protocol MREmulatedGameControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRGameControllerDaemonProxy.h"

@interface MREmulatedGameController : NSObject {
    MRGameControllerDaemonProxy *_remote;
}


@property (nonatomic) CGFloat buttonAUpDelay; // ivar: _buttonAUpDelay
@property (retain, nonatomic) GCController *controller; // ivar: _controller
@property (weak, nonatomic) NSObject<MREmulatedGameControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) int profile; // ivar: _profile


-(id)initWithProperties:(id)arg0 ;
-(void)_handleGameControllerDidChange:(id)arg0 ;
-(void)dealloc;
-(void)sendGameControllerEvent:(id)arg0 ;


@end


#endif