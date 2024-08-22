// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPCLOCK_H
#define TSGPTPCLOCK_H

@class NSArray;


#import "TSKernelClock.h"
#import "TSXgPTPClock.h"

@interface TSgPTPClock : TSKernelClock {
    TSXgPTPClock *_implXPC;
}


@property (readonly, nonatomic) unsigned char clockAccuracy;
@property (readonly, nonatomic) unsigned char clockClass;
@property (readonly, nonatomic) NSUInteger clockIdentity;
@property (readonly, nonatomic) unsigned char clockPriority1;
@property (readonly, nonatomic) unsigned char clockPriority2;
@property (copy, nonatomic) NSArray *gptpPath;
@property (nonatomic) NSUInteger grandmasterIdentity;
@property (readonly, copy, nonatomic) NSArray *ports;


+(id)clockNameForClockIdentifier:(NSUInteger)arg0 ;
+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)keyPathsForValuesAffectingClockAccuracy;
+(id)keyPathsForValuesAffectingClockClass;
+(id)keyPathsForValuesAffectingClockIdentity;
+(id)keyPathsForValuesAffectingClockPriority1;
+(id)keyPathsForValuesAffectingClockPriority2;
+(id)keyPathsForValuesAffectingGptpPath;
+(id)keyPathsForValuesAffectingGrandmasterIdentity;
+(id)keyPathsForValuesAffectingPorts;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg0 allocatedPortNumber:(*unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg0 error:(*id)arg1 ;
-(BOOL)addReverseSyncOnInterfaceNamed:(id)arg0 withDomainNumner:(unsigned char)arg1 syncInterval:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)convertFrom32BitASTime:(*unsigned int)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFrom32BitASTime:(*unsigned int)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 forGrandmasterIdentity:(*NSUInteger)arg4 portNumber:(*unsigned short)arg5 withError:(*id)arg6 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 forGrandmasterIdentity:(*NSUInteger)arg4 portNumber:(*unsigned short)arg5 withError:(*id)arg6 ;
-(BOOL)removeLinkLayerPortFromInterfaceNamed:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeReverseSyncFromInterfaceNamed:(id)arg0 withDomainNumner:(unsigned char)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(NSUInteger)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct ? )arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFrom128BitgPTPTimeToTimeSyncTime:(struct ? )arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg0 ;
-(NSUInteger)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg0 withFlags:(*unsigned int)arg1 ;
-(NSUInteger)convertFrom32BitASToTimeSyncTime:(unsigned int)arg0 ;
-(NSUInteger)convertFromDomainTimeToTimeSyncTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromTimeSyncTimeToDomainTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)machAbsoluteFromgPTPTime:(id)arg0 ;
-(NSUInteger)timeSyncTimeFromgPTPTime:(id)arg0 ;
-(id)gPTPTimeFromMachAbsoluteTime:(NSUInteger)arg0 ;
-(id)gPTPTimeFromTimeSyncTime:(NSUInteger)arg0 ;
-(id)initWithClockIdentifier:(NSUInteger)arg0 ;
-(id)initWithImplXPC:(id)arg0 ;
-(id)portWithPortNumber:(unsigned short)arg0 ;
-(struct ? )convertFromMachAbsoluteTo128BitgPTPTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(struct ? )convertFromTimeSyncTimeTo128BitgPTPTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(void)dealloc;


@end


#endif