// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTSHARINGBACKEDREMOTESETUPBROADCASTER_H
#define DMTSHARINGBACKEDREMOTESETUPBROADCASTER_H

@class NSString, CATOperationQueue, CATSharingBroadcastTerminal;
@protocol CATSharingBroadcastTerminalDelegate, DMTRemoteSetupBroadcasting;

#import <Foundation/Foundation.h>


@interface DMTSharingBackedRemoteSetupBroadcaster : NSObject <CATSharingBroadcastTerminalDelegate, DMTRemoteSetupBroadcasting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CATOperationQueue *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayedPin; // ivar: _displayedPin
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBroadcasting; // ivar: _isBroadcasting
@property (nonatomic) BOOL isInvalidated; // ivar: _isInvalidated
@property (copy, nonatomic) id *pairedTransportHandler; // ivar: _pairedTransportHandler
@property (copy, nonatomic) id *showErrorHandler; // ivar: _showErrorHandler
@property (copy, nonatomic) id *showPinHandler; // ivar: _showPinHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATSharingBroadcastTerminal *terminal; // ivar: _terminal


-(id)initWithPrimitives:(id)arg0 ;
-(void)beginObservingTerminal;
-(void)broadcastTerminal:(id)arg0 didActivateWithError:(id)arg1 ;
-(void)broadcastTerminal:(id)arg0 hasError:(id)arg1 ;
-(void)broadcastTerminal:(id)arg0 hasPairedDeviceConnection:(id)arg1 ;
-(void)broadcastTerminal:(id)arg0 needsToDisplayPin:(id)arg1 ;
-(void)broadcastTerminal:(id)arg0 stoppedWithError:(id)arg1 ;
-(void)broadcastTerminalNeedsToDismissPin:(id)arg0 ;
-(void)dealloc;
-(void)endObservingTerminal;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startBroadcasting;


@end


#endif