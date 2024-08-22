// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPFILETRANSFERSESSION_H
#define RPFILETRANSFERSESSION_H

@class CUBonjourAdvertiser, CUBonjourBrowser, CUCoalescer, CUBonjourDevice, NSMutableSet, NSMutableDictionary, CUTCPServer, CUWiFiManager, NSMutableArray, NSString, NSData, NSURL;
@protocol NSSecureCoding, RPMessageable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPConnection.h"
#import "RPIdentity.h"
#import "RPFileTransferProgress.h"

@interface RPFileTransferSession : NSObject <NSSecureCoding, RPMessageable>

 {
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    CUBonjourBrowser *_bonjourBrowser;
    CUCoalescer *_bonjourCoalescer;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _cnxIDLast;
    NSMutableSet *_connections;
    RPConnection *_controlCnx;
    NSObject<OS_dispatch_source> *_controlRetryTimer;
    int _controlState;
    int _debugNotifyToken;
    BOOL _finishPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _lockedInterface;
    RPIdentity *_peerIdentity;
    BOOL _peerInfraWiFiDisabled;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    RPIdentity *_selfIdentity;
    CUTCPServer *_tcpServer;
    *LogCategory _ucat;
    CUWiFiManager *_wifiManager;
    NSMutableSet *_addedItems;
    BOOL _compressionEnabled;
    NSUInteger _fileIDLastReceive;
    NSUInteger _fileIDLastSend;
    NSMutableArray *_ioQueues;
    NSString *_receiveFileParentPath;
    NSUInteger _taskIDLast;
    NSMutableDictionary *_smallFilesReceiveTasks;
    NSMutableSet *_smallFilesSendTasks;
    NSMutableDictionary *_largeFileReceiveTasks;
    NSMutableSet *_largeFileSendTasks;
    unsigned int _fileWritesOutstanding;
    BOOL _prefCompress;
    unsigned int _prefLargeFileBufferBytes;
    int _prefLargeFileMaxOutstanding;
    unsigned int _prefLargeFileMaxTasks;
    unsigned int _prefSmallFilesMaxBytes;
    unsigned int _prefSmallFilesMaxTasks;
    NSUInteger _metricCompressedBytes;
    NSUInteger _metricUncompressedBytes;
    NSUInteger _metricCompressionErrors;
    NSUInteger _metricUncompressibleChunks;
    unsigned int _metricDisconnects;
    NSUInteger _metricRetries;
    NSUInteger _metricLastFileCompletionTicks;
    NSUInteger _metricFileSizeBuckets;
    unsigned int _metricLinkTypeCountAWDL;
    unsigned int _metricLinkTypeCountOther;
    unsigned int _metricLinkTypeCountUSB;
    NSUInteger _metricNotEnoughFiles;
    NSUInteger _metricPrematureSmallSets;
    NSUInteger _metricTCPRanDryCount;
    NSUInteger _metricTicksConnected;
    NSUInteger _metricTicksConnectStart;
    NSUInteger _metricTicksActivate;
    NSUInteger _metricTotalBytes;
    NSUInteger _metricTotalFiles;
    unsigned int _metricTotalIOQueues;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSUInteger debugFlags; // ivar: _debugFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) id *flowControlChangedHandler; // ivar: _flowControlChangedHandler
@property (readonly, nonatomic) int flowControlState; // ivar: _flowControlState
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSData *peerPublicKey; // ivar: _peerPublicKey
@property (readonly, nonatomic) RPFileTransferProgress *progressCurrent; // ivar: _progressCurrent
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *receivedItemHandler; // ivar: _receivedItemHandler
@property (copy, nonatomic) id *receivedItemsHandler; // ivar: _receivedItemsHandler
@property (copy, nonatomic) NSData *selfPublicKey; // ivar: _selfPublicKey
@property (copy, nonatomic) NSData *selfSecretKey; // ivar: _selfSecretKey
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSString *targetID; // ivar: _targetID
@property (copy, nonatomic) NSURL *temporaryDirectoryURL; // ivar: _temporaryDirectoryURL


+(BOOL)supportsSecureCoding;
-(BOOL)_activateAndReturnError:(*id)arg0 ;
-(BOOL)_activateSourceAndReturnError:(*id)arg0 ;
-(BOOL)_activateTargetAndReturnError:(*id)arg0 ;
-(BOOL)_prepareItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readFD:(int)arg0 buffer:(char *)arg1 size:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_smallFilesReceiveTaskFileItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeFD:(int)arg0 buffer:(char *)arg1 size:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)prepareTemplateAndReturnError:(*id)arg0 ;
-(id)_compressData:(id)arg0 error:(*id)arg1 ;
-(id)_decompressAndDecodeData:(id)arg0 originalSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_decompressData:(id)arg0 originalSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_encodeAndCompressObject:(id)arg0 originalSize:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)_ioQueueDequeue;
-(id)_largeFileSendTaskCreate;
-(id)_readFD:(int)arg0 size:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_readPath:(char *)arg0 size:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_smallFilesSendTaskCreate;
-(id)_smallFilesSendTaskReadItem:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)_openReadPath:(char *)arg0 error:(*id)arg1 ;
-(int)_openWriteFileItem:(id)arg0 size:(NSInteger)arg1 error:(*id)arg2 ;
-(int)_openWritePath:(id)arg0 size:(NSInteger)arg1 error:(*id)arg2 ;
-(void)_completeItem:(id)arg0 error:(id)arg1 ;
-(void)_completeItemDirect:(id)arg0 error:(id)arg1 ;
-(void)_controlCnxRetryIfNeeded;
-(void)_controlCnxStartIfNeeded;
-(void)_debugSetup;
-(void)_debugUpdate;
-(void)_handleDeviceFound:(id)arg0 ;
-(void)_handleDeviceLost:(id)arg0 ;
-(void)_handleDevicesCoalesced;
-(void)_handleIncomingConnectionEnded:(id)arg0 ;
-(void)_handleIncomingConnectionStarted:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_ioQueueEnqueue:(id)arg0 ;
-(void)_largeFileReceiveRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_largeFileReceiveTaskInvalidate:(id)arg0 ;
-(void)_largeFileReceiveTaskRespond:(id)arg0 error:(id)arg1 complete:(BOOL)arg2 responseHandler:(id)arg3 ;
-(void)_largeFileReceiveTaskRun:(id)arg0 data:(id)arg1 sendFlags:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)_largeFileSendTaskEnd:(id)arg0 error:(id)arg1 ;
-(void)_largeFileSendTaskFailed:(id)arg0 error:(id)arg1 ;
-(void)_largeFileSendTaskNext:(id)arg0 xid:(unsigned int)arg1 ;
-(void)_largeFileSendTaskResponse:(id)arg0 error:(id)arg1 end:(BOOL)arg2 xid:(unsigned int)arg3 ;
-(void)_largeFileSendTaskSend:(id)arg0 data:(id)arg1 end:(BOOL)arg2 xid:(unsigned int)arg3 ;
-(void)_largeFileSendTaskStart:(id)arg0 ;
-(void)_metricAddFileSize:(NSInteger)arg0 ;
-(void)_prefsChanged;
-(void)_processFinish;
-(void)_processReceivedItem:(id)arg0 responseHandler:(id)arg1 ;
-(void)_processReceivedItems:(id)arg0 responseHandler:(id)arg1 ;
-(void)_receivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)_receivedPeerUpdate:(id)arg0 ;
-(void)_receivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)_reportCompletion:(id)arg0 ;
-(void)_reportProgressControlState;
-(void)_reportProgressType:(int)arg0 ;
-(void)_scheduleItems;
-(void)_smallFilesReceiveRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_smallFilesReceiveTaskComplete:(id)arg0 error:(id)arg1 responseHandler:(id)arg2 ;
-(void)_smallFilesReceiveTaskRun:(id)arg0 responseHandler:(id)arg1 ;
-(void)_smallFilesSendTaskEnd:(id)arg0 error:(id)arg1 ;
-(void)_smallFilesSendTaskRun:(id)arg0 ;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)_updateWiFi;
-(void)activate;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)dealloc;
-(void)deregisterEventID:(id)arg0 ;
-(void)deregisterRequestID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finish;
-(void)invalidate;
-(void)registerEventID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif