// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSTCPLINK_H
#define IDSTCPLINK_H

@class NSString, NSIndexSet;
@protocol IDSLink, IDSLinkDelegate;

#import <Foundation/Foundation.h>


@interface IDSTCPLink : NSObject <IDSLink>

 {
    int _addressFamily;
    ? _conns;
    id *_getPacketLength;
    IDSTCPLinkCounter_ _counters;
    IDSTCPLinkCounter_ _previousCounters;
    CGFloat _previousReportTime;
}


@property (weak) NSObject<IDSLinkDelegate> *alternateDelegate; // ivar: _alternateDelegate
@property (retain) NSString *cbuuid; // ivar: _cbuuid
@property (retain, nonatomic) NSIndexSet *cellularInterfaceIndices; // ivar: _cellularInterfaceIndices
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<IDSLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID; // ivar: _deviceUniqueID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger headerOverhead;
@property (readonly, nonatomic) BOOL isSSL; // ivar: _isSSL
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL wifiAssistEnabled; // ivar: _wifiAssistEnabled


-(?)sendPacketBufferArray:(?)arg0 arraySize:(?)arg1 toDeviceUniqueIDcbuuid;
-(BOOL)connect:(int)arg0 localAddress:(struct sockaddr *)arg1 portRange:(unsigned short)arg2 remoteAddress:(struct sockaddr *)arg3 clientUUID:(unsigned char)arg4 completionHandler:(id)arg5 ;
-(BOOL)disconnect:(struct sockaddr_in *)arg0 remoteAddress:(struct sockaddr_in *)arg1 ;
-(NSInteger)getPacketLength:(struct ? *)arg0 isChannelData:(*BOOL)arg1 ;
-(NSUInteger)sendPacketBuffer:(struct ? *)arg0 toDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)copyLinkStatsDict;
-(id)generateLinkReport:(CGFloat)arg0 isCurrentLink:(BOOL)arg1 ;
-(id)initWithDeviceUniqueID:(id)arg0 cbuuid:(id)arg1 isSSL:(BOOL)arg2 getPacketLength:(id)arg3 ;
-(struct IDSTCPConnection_ *)_getIDSTCPConnection:(struct ? *)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)processIncomingPacket:(struct ? *)arg0 ;
-(void)setWiFiAssistState:(BOOL)arg0 ;


@end


#endif