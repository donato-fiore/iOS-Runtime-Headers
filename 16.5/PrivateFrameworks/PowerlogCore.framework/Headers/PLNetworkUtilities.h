// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLNETWORKUTILITIES_H
#define PLNETWORKUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLNetworkUtilities : NSObject



+(BOOL)isESPPacket:(struct __CFData *)arg0 offset:(unsigned char)arg1 ;
+(id)decodeEtherType:(unsigned short)arg0 ;
+(id)decodeIPPacket:(id)arg0 encryptedPath:(BOOL)arg1 ;
+(id)getIPAddress:(*int)arg0 withAddressFamily:(CGFloat)arg1 ;
+(id)getIPSecWakeInfo;
+(id)getNetworkWakeInfo:(struct kern_event_msg *)arg0 ;
+(id)getNormalizedIPV6Address:(id)arg0 ;
+(id)getSeqNoAndSPI:(struct __CFData *)arg0 offset:(unsigned char)arg1 ;
+(id)getUnattributedWakeInfo:(struct kern_event_msg *)arg0 ;
+(id)handleIPSecEvent:(int)arg0 ;
+(id)handlePowerWakeEvent:(int)arg0 ;
+(id)interfaceNameForIndex:(id)arg0 ;
+(id)sockaddrToNSDictionary:(char *)arg0 ;
+(id)stringFromTrafficClass:(unsigned int)arg0 ;
+(id)tcpParse:(struct __CFData *)arg0 offset:(unsigned char)arg1 ;
+(id)udpParse:(struct __CFData *)arg0 offset:(unsigned char)arg1 ;


@end


#endif