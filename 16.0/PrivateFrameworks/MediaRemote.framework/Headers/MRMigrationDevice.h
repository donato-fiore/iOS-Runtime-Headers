// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRMIGRATIONDEVICE_H
#define MRMIGRATIONDEVICE_H

@class NSString, NSError;
@protocol MRQHONowPlayingControllerDelegate, MRMigrationDeviceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRQHONowPlayingController.h"
#import "MRAVEndpoint.h"
#import "MRNowPlayingPlayerResponse.h"

@interface MRMigrationDevice : NSObject <MRQHONowPlayingControllerDelegate>



@property (retain, nonatomic) MRQHONowPlayingController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRMigrationDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger deviceState; // ivar: _deviceState
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) MRNowPlayingPlayerResponse *playerState;
@property (retain, nonatomic) NSError *prepareError; // ivar: _prepareError
@property (nonatomic) BOOL preparedForAirPlay; // ivar: _preparedForAirPlay
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uid;


+(id)proactiveDevice;
-(id)dictionaryRepresentation;
-(id)initWithUID:(id)arg0 ;
-(void)_checkIfAirPlayPossible;
-(void)_notifyDelegateOfPlayerStateChange;
-(void)_notifyDelegateOfStateChange;
-(void)controller:(id)arg0 didFailWithError:(id)arg1 ;
-(void)controller:(id)arg0 didLoadResponse:(id)arg1 ;
-(void)controller:(id)arg0 didUpdateResponse:(id)arg1 ;
-(void)controllerWillReloadForInvalidation:(id)arg0 ;
-(void)dealloc;
-(void)prepare;


@end


#endif