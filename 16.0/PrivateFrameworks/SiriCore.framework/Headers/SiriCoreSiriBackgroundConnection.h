// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESIRIBACKGROUNDCONNECTION_H
#define SIRICORESIRIBACKGROUNDCONNECTION_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol SiriCoreConnectionProviderDelegate, OS_dispatch_queue, SiriCoreConnectionProvider, OS_dispatch_data, OS_dispatch_source, SiriCoreSiriBackgroundConnectionDelegate;

#import <Foundation/Foundation.h>

#import "SiriCoreSiriConnectionInfo.h"
#import "SiriCoreDataDecompressor.h"
#import "SiriCoreDataCompressor.h"
#import "SiriCorePingInfo.h"

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreConnectionProviderDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriCoreConnectionProvider> *_connectionProvider;
    SiriCoreSiriConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    NSObject<OS_dispatch_data> *_bufferedProviderHeaderOutputData;
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    NSObject<OS_dispatch_data> *_bufferedUncompressedData;
    SiriCoreDataDecompressor *_inputDecompressor;
    SiriCoreDataCompressor *_outputCompressor;
    *__CFHTTPMessage _httpResponseHeader;
    BOOL _isOpened;
    BOOL _isCanceled;
    BOOL _hasReportedError;
    NSMutableDictionary *_errorsForConnectionMethods;
    NSObject<OS_dispatch_source> *_aceHeaderTimerSource;
    NSUInteger _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> *_pingTimerSource;
    unsigned int _currentPingIndex;
    SiriCorePingInfo *_pingInfo;
    NSUInteger _lastInputLength;
    *void _lastInputDataPointer;
    NSUInteger _inputLengthUnchangedCounter;
    NSUInteger _lastOutputLength;
    *void _lastOutputDataPointer;
    NSUInteger _outputLengthUnchangedCounter;
    unsigned int _currentBarrierIndex;
    NSMutableDictionary *_outstandingBarriers;
    NSInteger _connectionMethod;
    NSObject<OS_dispatch_data> *_safetyNetBuffer;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    CGFloat _firstStartTime;
    CGFloat _currentStartTime;
    CGFloat _currentOpenTime;
    CGFloat _firstByteReadTime;
    NSUInteger _startCount;
    NSUInteger _metricsCount;
    NSMutableArray *_outgoingCommandsWithSendCompletions;
    BOOL _primaryConnectionViable;
    BOOL _betterPathAvailable;
    NSInteger _secondaryConnectionOpenState;
    id<SiriCoreConnectionProvider> *_secondaryConnectionProvider;
    BOOL _dispatchedSnapshotMetrics;
    CGFloat _receivedDataTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriCoreSiriBackgroundConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup; // ivar: _deviceIsInWalkaboutExperimentGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class peerProviderClass; // ivar: _peerProviderClass
@property (copy, nonatomic) NSString *peerType; // ivar: _peerType
@property (copy, nonatomic) NSString *peerVersion; // ivar: _peerVersion
@property (copy, nonatomic) NSString *productTypePrefix; // ivar: _productTypePrefix
@property (nonatomic) BOOL siriConnectionUsesPeerManagedSync; // ivar: _siriConnectionUsesPeerManagedSync
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesProxyConnection; // ivar: _usesProxyConnection


-(BOOL)_canFallBackFromError:(id)arg0 ;
-(BOOL)_consumeAceDataWithData:(id)arg0 bytesRead:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_consumeAceHeaderWithData:(id)arg0 bytesRead:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_consumeHTTPHeaderWithData:(id)arg0 bytesRead:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_hasBufferedDataOrOutstandingPings;
-(BOOL)_hasReadACEHeader;
-(BOOL)_hasReadHTTPHeader;
-(BOOL)_sendAcePingWithId:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)_sendAcePongWithId:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)_shouldTrySameConnectionMethodForMethod:(NSInteger)arg0 error:(id)arg1 ;
-(BOOL)_tcpInfoIndicatesPoorLinkQuality;
-(BOOL)_tryParsingHTTPHeaderData:(id)arg0 partialMessage:(struct __CFHTTPMessage *)arg1 statusCode:(*NSInteger)arg2 bytesRead:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)_tryReadingHTTPHeaderData:(id)arg0 withMessage:(struct __CFHTTPMessage *)arg1 bytesRead:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_tryReadingParsedDataFromBytes:(*void)arg0 length:(NSUInteger)arg1 packet:(struct ? *)arg2 object:(*id)arg3 bytesParsed:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)_usingFlorence;
-(BOOL)_usingNetwork;
-(BOOL)_usingPOP;
-(BOOL)_usingPOPOnPeer;
-(BOOL)_usingPeer;
-(BOOL)_wifiOrCellularMayBeBetterThanCurrentStream;
-(Class)_providerClass;
-(NSInteger)_checkForProgressOnReadingData;
-(NSInteger)_checkPings;
-(NSInteger)_nextConnectionMethod;
-(NSInteger)_normalizeSNR:(NSInteger)arg0 ;
-(id)_aceHeaderData;
-(id)_bestErrorBetweenError:(id)arg0 peerError:(id)arg1 ;
-(id)_connectionMethodDescription;
-(id)_connectionType;
-(id)_getInitialPayloadWithBufferedLength:(*NSUInteger)arg0 forceReconnect:(BOOL)arg1 ;
-(id)_headerDataForURL:(id)arg0 aceHost:(id)arg1 languageCode:(id)arg2 syncAssistantId:(id)arg3 ;
-(id)_httpHeaderData;
-(id)_tryReadingAceHeaderFromData:(id)arg0 bytesParsed:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)analysisInfo;
-(id)getConnectionMethodUsed;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_aceHeaderTimeoutFired:(id)arg0 afterTimeout:(CGFloat)arg1 ;
-(void)_bufferGeneralData:(id)arg0 ;
-(void)_cancelOutstandingBarriers;
-(void)_cancelSecondaryConnection;
-(void)_closeConnection;
-(void)_closeConnectionAndPrepareForReconnect:(BOOL)arg0 ;
-(void)_connectionHasBytesAvailable:(id)arg0 ;
-(void)_didEncounterError:(id)arg0 ;
-(void)_fallBackToNextConnectionMethod:(NSInteger)arg0 fromError:(id)arg1 afterDelay:(CGFloat)arg2 ;
-(void)_fallBackToNextConnectionMethodWithError:(id)arg0 orElse:(id)arg1 ;
-(void)_forceTriggerRetry;
-(void)_getCellularMetrics:(id)arg0 ;
-(void)_getWifiMetrics:(id)arg0 ;
-(void)_handleAceEnd;
-(void)_handleAceNop;
-(void)_handleAceObject:(id)arg0 ;
-(void)_handleAcePing:(unsigned int)arg0 ;
-(void)_handleAcePong:(unsigned int)arg0 ;
-(void)_handleBarrierReply:(unsigned int)arg0 ;
-(void)_handlePacket:(struct ? *)arg0 ;
-(void)_initializeBufferedGeneralOutputDataWithInitialPayload:(BOOL)arg0 ;
-(void)_networkProviderDidOpen;
-(void)_pingTimerFired;
-(void)_prepareProviderHeaderWithForceReconnect:(BOOL)arg0 ;
-(void)_resumePingTimer;
-(void)_scheduleAceHeaderTimeoutTimerWithInterval:(CGFloat)arg0 ;
-(void)_sendGeneralData:(id)arg0 ;
-(void)_setNetworkProvider:(id)arg0 ;
-(void)_setupReadHandlerOnProvider;
-(void)_startNetworkProviderWithInfo:(id)arg0 ;
-(void)_startSecondaryConnection;
-(void)_startWithConnectionInfo:(id)arg0 proposedFallbackMethod:(NSInteger)arg1 allowFallbackToNewMethod:(BOOL)arg2 ;
-(void)_tryToWriteBufferedOutputData;
-(void)_updateBuffersForInitialPayload:(id)arg0 bufferedLength:(NSUInteger)arg1 forceReconnect:(BOOL)arg2 ;
-(void)barrier:(id)arg0 ;
-(void)cancel;
-(void)connectionProvider:(id)arg0 receivedError:(id)arg1 ;
-(void)connectionProvider:(id)arg0 receivedViabilityChangeNotification:(BOOL)arg1 ;
-(void)connectionProviderReceivedBetterRouteNotification:(id)arg0 ;
-(void)dealloc;
-(void)getConnectionMetrics:(id)arg0 withCompletion:(id)arg1 ;
-(void)probeConnection;
-(void)sendCommand:(id)arg0 moreComing:(BOOL)arg1 errorHandler:(id)arg2 ;
-(void)sendCommands:(id)arg0 errorHandler:(id)arg1 ;
-(void)setSendPings:(BOOL)arg0 ;
-(void)startHeartBeat;
-(void)startWithConnectionInfo:(id)arg0 ;
-(void)stopHeartBeat;
-(void)updateActiveBackgroundConnectionWithSecondary;


@end


#endif