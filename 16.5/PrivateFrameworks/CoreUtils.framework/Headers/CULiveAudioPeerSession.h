// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CULIVEAUDIOPEERSESSION_H
#define CULIVEAUDIOPEERSESSION_H

@class RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol CUActivatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CULiveAudioPeerSession : NSObject <CUActivatable>

 {
    RPCompanionLinkClient *_clinkClient;
}


@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // ivar: _destinationDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(void)_activateCompleted:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)sendAudioDataEvent:(id)arg0 ;


@end


#endif