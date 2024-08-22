// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDNWAPIUSAGE_H
#define NWAWDNWAPIUSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDNWAPIUsage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIfFltrAttach;
@property (nonatomic) BOOL hasIfFltrAttachOs;
@property (nonatomic) BOOL hasIfNetagentEnabled;
@property (nonatomic) BOOL hasIfnetAlloc;
@property (nonatomic) BOOL hasIfnetAllocOs;
@property (nonatomic) BOOL hasIpFltrAdd;
@property (nonatomic) BOOL hasIpFltrAddOs;
@property (nonatomic) BOOL hasNexusFlowInet6Datagram;
@property (nonatomic) BOOL hasNexusFlowInet6Stream;
@property (nonatomic) BOOL hasNexusFlowInetDatagram;
@property (nonatomic) BOOL hasNexusFlowInetStream;
@property (nonatomic) BOOL hasPfAddrule;
@property (nonatomic) BOOL hasPfAddruleOs;
@property (nonatomic) BOOL hasSockAlloc;
@property (nonatomic) BOOL hasSockAllocKernel;
@property (nonatomic) BOOL hasSockAllocKernelOs;
@property (nonatomic) BOOL hasSockDomainInet;
@property (nonatomic) BOOL hasSockDomainInet6;
@property (nonatomic) BOOL hasSockDomainKey;
@property (nonatomic) BOOL hasSockDomainLocal;
@property (nonatomic) BOOL hasSockDomainMultipath;
@property (nonatomic) BOOL hasSockDomainNdrv;
@property (nonatomic) BOOL hasSockDomainOther;
@property (nonatomic) BOOL hasSockDomainRoute;
@property (nonatomic) BOOL hasSockDomainSystem;
@property (nonatomic) BOOL hasSockFltrRegister;
@property (nonatomic) BOOL hasSockFltrRegisterOs;
@property (nonatomic) BOOL hasSockInetMcastJoin;
@property (nonatomic) BOOL hasSockInetMcastJoinOs;
@property (nonatomic) BOOL hasSockNecpClientuuidCount;
@property (nonatomic) BOOL hasSockNetInet6Dgram;
@property (nonatomic) BOOL hasSockNetInet6DgramConnected;
@property (nonatomic) BOOL hasSockNetInet6DgramDns;
@property (nonatomic) BOOL hasSockNetInet6DgramNoData;
@property (nonatomic) BOOL hasSockNetInet6Stream;
@property (nonatomic) BOOL hasSockNetInetDgram;
@property (nonatomic) BOOL hasSockNetInetDgramConnected;
@property (nonatomic) BOOL hasSockNetInetDgramDns;
@property (nonatomic) BOOL hasSockNetInetDgramNoData;
@property (nonatomic) BOOL hasSockNetInetStream;
@property (nonatomic) BOOL hasTimeSinceLastReport;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVmnetStart;
@property (nonatomic) NSInteger ifFltrAttach; // ivar: _ifFltrAttach
@property (nonatomic) NSInteger ifFltrAttachOs; // ivar: _ifFltrAttachOs
@property (nonatomic) BOOL ifNetagentEnabled; // ivar: _ifNetagentEnabled
@property (nonatomic) NSInteger ifnetAlloc; // ivar: _ifnetAlloc
@property (nonatomic) NSInteger ifnetAllocOs; // ivar: _ifnetAllocOs
@property (nonatomic) NSInteger ipFltrAdd; // ivar: _ipFltrAdd
@property (nonatomic) NSInteger ipFltrAddOs; // ivar: _ipFltrAddOs
@property (nonatomic) NSInteger nexusFlowInet6Datagram; // ivar: _nexusFlowInet6Datagram
@property (nonatomic) NSInteger nexusFlowInet6Stream; // ivar: _nexusFlowInet6Stream
@property (nonatomic) NSInteger nexusFlowInetDatagram; // ivar: _nexusFlowInetDatagram
@property (nonatomic) NSInteger nexusFlowInetStream; // ivar: _nexusFlowInetStream
@property (nonatomic) NSInteger pfAddrule; // ivar: _pfAddrule
@property (nonatomic) NSInteger pfAddruleOs; // ivar: _pfAddruleOs
@property (nonatomic) NSInteger sockAlloc; // ivar: _sockAlloc
@property (nonatomic) NSInteger sockAllocKernel; // ivar: _sockAllocKernel
@property (nonatomic) NSInteger sockAllocKernelOs; // ivar: _sockAllocKernelOs
@property (nonatomic) NSInteger sockDomainInet; // ivar: _sockDomainInet
@property (nonatomic) NSInteger sockDomainInet6; // ivar: _sockDomainInet6
@property (nonatomic) NSInteger sockDomainKey; // ivar: _sockDomainKey
@property (nonatomic) NSInteger sockDomainLocal; // ivar: _sockDomainLocal
@property (nonatomic) NSInteger sockDomainMultipath; // ivar: _sockDomainMultipath
@property (nonatomic) NSInteger sockDomainNdrv; // ivar: _sockDomainNdrv
@property (nonatomic) NSInteger sockDomainOther; // ivar: _sockDomainOther
@property (nonatomic) NSInteger sockDomainRoute; // ivar: _sockDomainRoute
@property (nonatomic) NSInteger sockDomainSystem; // ivar: _sockDomainSystem
@property (nonatomic) NSInteger sockFltrRegister; // ivar: _sockFltrRegister
@property (nonatomic) NSInteger sockFltrRegisterOs; // ivar: _sockFltrRegisterOs
@property (nonatomic) NSInteger sockInetMcastJoin; // ivar: _sockInetMcastJoin
@property (nonatomic) NSInteger sockInetMcastJoinOs; // ivar: _sockInetMcastJoinOs
@property (nonatomic) NSInteger sockNecpClientuuidCount; // ivar: _sockNecpClientuuidCount
@property (nonatomic) NSInteger sockNetInet6Dgram; // ivar: _sockNetInet6Dgram
@property (nonatomic) NSInteger sockNetInet6DgramConnected; // ivar: _sockNetInet6DgramConnected
@property (nonatomic) NSInteger sockNetInet6DgramDns; // ivar: _sockNetInet6DgramDns
@property (nonatomic) NSInteger sockNetInet6DgramNoData; // ivar: _sockNetInet6DgramNoData
@property (nonatomic) NSInteger sockNetInet6Stream; // ivar: _sockNetInet6Stream
@property (nonatomic) NSInteger sockNetInetDgram; // ivar: _sockNetInetDgram
@property (nonatomic) NSInteger sockNetInetDgramConnected; // ivar: _sockNetInetDgramConnected
@property (nonatomic) NSInteger sockNetInetDgramDns; // ivar: _sockNetInetDgramDns
@property (nonatomic) NSInteger sockNetInetDgramNoData; // ivar: _sockNetInetDgramNoData
@property (nonatomic) NSInteger sockNetInetStream; // ivar: _sockNetInetStream
@property (nonatomic) NSUInteger timeSinceLastReport; // ivar: _timeSinceLastReport
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger vmnetStart; // ivar: _vmnetStart


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif