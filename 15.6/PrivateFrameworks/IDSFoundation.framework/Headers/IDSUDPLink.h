// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSUDPLINK_H
#define IDSUDPLINK_H

@class NSDictionary, NSString, NSIndexSet;
@protocol IDSLink, IDSLinkDelegate;

#import <Foundation/Foundation.h>

#import "IDSSockAddrWrapper.h"

@interface IDSUDPLink : NSObject <IDSLink>

 {
    int _addressFamily;
    IDSSockAddrWrapper *_localAddress;
    IDSSockAddrWrapper *_destinationAddress;
    BOOL _hasFixedDestination;
    NSDictionary *_destinationAddressToDeviceIDMap;
    BOOL _wantsAWDL;
    BOOL _wantsWiFi;
    BOOL _wantsCellular;
    BOOL _needToConnect;
    BOOL _hasTemporaryError;
    NSUInteger _totalBytesSent;
    NSUInteger _totalPacketsSent;
    NSUInteger _totalBytesReceived;
    NSUInteger _totalPacketsReceived;
    NSUInteger _previousBytesSent;
    NSUInteger _previousPacketsSent;
    NSUInteger _previousBytesReceived;
    NSUInteger _previousPacketsReceived;
    CGFloat _previousReportTime;
}


@property (nonatomic) BOOL allowsLinkLocal; // ivar: _allowsLinkLocal
@property (weak) NSObject<IDSLinkDelegate> *alternateDelegate; // ivar: _alternateDelegate
@property (retain) NSString *cbuuid; // ivar: _cbuuid
@property (retain, nonatomic) NSIndexSet *cellularInterfaceIndices; // ivar: _cellularInterfaceIndices
@property (nonatomic) unsigned short cellularPort; // ivar: _cellularPort
@property (readonly, nonatomic) int cellularSocket; // ivar: _cellularSocket
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<IDSLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID; // ivar: _deviceUniqueID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger headerOverhead;
@property (readonly, nonatomic) BOOL isInvalidated; // ivar: _isInvalidated
@property (readonly, nonatomic) CGFloat lastDestinationReceived; // ivar: _lastDestinationReceived
@property (nonatomic) CGFloat lastDestinationSent; // ivar: _lastDestinationSent
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (nonatomic) unsigned short port; // ivar: _port
@property (nonatomic) BOOL skipTransportThread; // ivar: _skipTransportThread
@property (readonly, nonatomic) int socket; // ivar: _socket
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultInterfaceOnly; // ivar: _useDefaultInterfaceOnly
@property (nonatomic) BOOL wifiAssistEnabled; // ivar: _wifiAssistEnabled


-(?)sendPacketBufferArray:(?)arg0 arraySize:(?)arg1 toDeviceUniqueIDcbuuid;
-(BOOL)_isInterfaceIndexCellular:(int)arg0 ;
-(BOOL)_setTrafficClassOnSocket:(int)arg0 trafficClassValue:(int)arg1 ;
-(BOOL)setDestinationAddress:(id)arg0 isFixedDestination:(BOOL)arg1 fromAddress:(id)arg2 ;
-(BOOL)setDestinationAddress:(id)arg0 localIfIndex:(unsigned int)arg1 isFixedDestination:(BOOL)arg2 fromAddress:(id)arg3 ;
-(BOOL)setDestinationAddressToDeviceIDMap:(id)arg0 ;
-(BOOL)setTrafficClass:(int)arg0 ;
-(NSUInteger)_sendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(NSUInteger)_sendBytes:(*void)arg0 length:(NSUInteger)arg1 destinationAddress:(struct sockaddr *)arg2 ;
-(NSUInteger)_sendBytesArray:(**void)arg0 lengthArray:(*NSUInteger)arg1 arraySize:(int)arg2 localInterfaceIndex:(int)arg3 localAddress:(struct sockaddr *)arg4 destinationAddress:(struct sockaddr *)arg5 trafficClass:(unsigned short)arg6 DSCP:(unsigned char)arg7 ;
-(NSUInteger)sendPacketBuffer:(struct ? *)arg0 destination:(id)arg1 toDeviceID:(id)arg2 ;
-(NSUInteger)sendPacketBuffer:(struct ? *)arg0 sourceInterface:(id)arg1 destination:(id)arg2 toDeviceID:(id)arg3 ;
-(NSUInteger)sendPacketBuffer:(struct ? *)arg0 toDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)_createNetworkInterfaceArrayWithIPVersion:(NSUInteger)arg0 wantsAWDL:(BOOL)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 allowsLinkLocal:(BOOL)arg4 useDefaultInterfaceOnly:(BOOL)arg5 defaultPairedDevice:(BOOL)arg6 ;
-(id)copyCurrentNetworkInterfaces;
-(id)copyLinkStatsDict;
-(id)generateLinkReport:(CGFloat)arg0 isCurrentLink:(BOOL)arg1 ;
-(id)initWithDeviceUniqueID:(id)arg0 cbuuid:(id)arg1 ;
-(id)newSocketWithIPVersion:(NSUInteger)arg0 wantsAWDL:(BOOL)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 ;
-(id)newSocketWithIPVersion:(NSUInteger)arg0 wantsAWDL:(BOOL)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 clientUUID:(unsigned char)arg4 ;
-(int)_createNewUDPSocketWithIPVersion:(NSUInteger)arg0 localPort:(*unsigned short)arg1 wantsAWDL:(BOOL)arg2 clientUUID:(unsigned char)arg3 ;
-(int)_findSocketForInterfaceIndex:(int)arg0 ;
-(void)_processIncomingCellularPacket;
-(void)_processIncomingPacket;
-(void)_processIncomingPacketOnSocket:(int)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)reconnectWithLocalAddress:(id)arg0 ;
-(void)removeSocket;
-(void)setWiFiAssistState:(BOOL)arg0 ;


@end


#endif