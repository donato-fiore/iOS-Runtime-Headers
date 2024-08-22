// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBUTIL_H
#define CBUTIL_H


#import <Foundation/Foundation.h>


@interface CBUtil : NSObject



+(BOOL)isAppleVID:(unsigned short)arg0 forVIDSrc:(unsigned char)arg1 ;
+(BOOL)isDeviceSupportedOnWatchOSWithType:(unsigned char)arg0 VIDsrc:(unsigned char)arg1 VID:(unsigned short)arg2 PID:(unsigned short)arg3 ;
+(BOOL)isDeviceSupportedWithType:(unsigned char)arg0 VIDsrc:(unsigned char)arg1 VID:(unsigned short)arg2 PID:(unsigned short)arg3 ;
+(BOOL)isWatchOS;
+(NSInteger)preSSPStringToPairingCode:(id)arg0 ;
+(id)preSSPPairingCodeToString:(NSInteger)arg0 ;


@end


#endif