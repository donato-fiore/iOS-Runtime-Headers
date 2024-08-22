// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMOMENTS_H
#define VCMOMENTS_H

@class NSMutableSet, NSString;
@protocol VCMomentsMessenger, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCMomentsHistory.h"
#import "VideoAttributes.h"

@interface VCMoments : NSObject <VCMomentsMessenger>

 {
    id *_delegate;
    id *_transportDelegate;
    unsigned int _streamToken;
    VCMomentsHistory *_momentsHistory;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int _currentActiveRequestsCount;
    BOOL _enableLocalVideoRecording;
    BOOL _isClientRegistered;
    NSMutableSet *_requests;
    BOOL _lastRequest;
    unsigned int _currentTimestamp;
}


@property (nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageType;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes; // ivar: _remoteScreenAttributes
@property (readonly) Class superclass;
@property (nonatomic) int videoCodec;


+(BOOL)deviceHasSufficientFreeSpace;
+(NSUInteger)countForRequestType:(int)arg0 ;
+(NSUInteger)deviceFreeDiskSpace;
+(NSUInteger)fileSize:(id)arg0 ;
+(int)typeForRequest:(id)arg0 ;
-(BOOL)isHistorySupported;
-(BOOL)processClientRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateIncomingRequest:(id)arg0 isRemote:(BOOL)arg1 ;
-(BOOL)validateNumberOfRequestsWithError:(*id)arg0 ;
-(NSUInteger)directorySize:(id)arg0 ;
-(id)initWithStreamToken:(unsigned int)arg0 delegate:(id)arg1 ;
-(id)momentsDelegate;
-(id)transportDelegate;
-(void)_generateRequest:(unsigned char)arg0 requestState:(unsigned char)arg1 transactionID:(id)arg2 timestamp:(unsigned int)arg3 ;
-(void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg0 timestamp:(unsigned int)arg1 ;
-(void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 cameraStatusBits:(unsigned char)arg1 timestamp:(unsigned int)arg2 ;
-(void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg0 timestamp:(unsigned int)arg1 ;
-(void)cleanupActiveRequests;
-(void)clearHistoryBuffer;
-(void)dealloc;
-(void)deregisterClient;
-(void)getInitialRemoteScreenAttributes:(id)arg0 ;
-(void)handleInsufficientFreeSpaceWithRequest:(id)arg0 delegate:(id)arg1 ;
-(void)notifyFinishWithRequest:(id)arg0 didSucceed:(BOOL)arg1 fileSize:(NSInteger)arg2 ;
-(void)notifyLocalFinishWithRequest:(id)arg0 didSucceed:(BOOL)arg1 ;
-(void)notifyRemoteFinishWithRequest:(id)arg0 didSucceed:(BOOL)arg1 fileSize:(NSInteger)arg2 ;
-(void)processRemoteLivePhotoRequest:(id)arg0 ;
-(void)processRemotePhotoRequest:(id)arg0 ;
-(void)processRemoteRequest:(id)arg0 withMediaType:(unsigned char)arg1 ;
-(void)processRequest:(id)arg0 isRemote:(BOOL)arg1 ;
-(void)registerClient;
-(void)setFrameRate:(float)arg0 ;
-(void)setMomentsDelegate:(id)arg0 ;
-(void)setRetainPixelBufferEnabled:(BOOL)arg0 ;
-(void)setTransportDelegate:(id)arg0 ;
-(void)updateActiveStatus;
-(void)updateRemoteScreenAttributes:(id)arg0 ;
-(void)updateVCMomentsMode;


@end


#endif