// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CULIVEACTIONPEERSESSION_H
#define CULIVEACTIONPEERSESSION_H

@class RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol CUActivatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CULiveActionPeerSession : NSObject <CUActivatable>

 {
    RPCompanionLinkClient *_clinkClient;
}


@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // ivar: _destinationDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL speakDisable; // ivar: _speakDisable


-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)performRequest:(id)arg0 completion:(id)arg1 ;
-(void)setupWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif