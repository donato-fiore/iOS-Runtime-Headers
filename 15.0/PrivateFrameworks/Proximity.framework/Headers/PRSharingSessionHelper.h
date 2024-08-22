// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSHARINGSESSIONHELPER_H
#define PRSHARINGSESSIONHELPER_H


#import <Foundation/Foundation.h>


@interface PRSharingSessionHelper : NSObject



+(NSInteger)CoarseRangeToProx:(int)arg0 ;
+(NSUInteger)NSDataToUInt64:(id)arg0 ;
+(id)HexStringToNSDataMac:(*void)arg0 ;
+(id)NSDataMacToUUID:(id)arg0 ;
+(id)ProxToString:(NSInteger)arg0 ;
+(id)UUIDStringToNSDataMac:(*void)arg0 len:(NSUInteger)arg1 ;
+(id)UUIDToNSDataMac:(id)arg0 len:(NSUInteger)arg1 ;
+(id)convertMacStringToNSData:(*void)arg0 ;
+(id)reverseNSData:(id)arg0 ;
+(int)ProxToCoarseRange:(NSInteger)arg0 ;
+(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )UIntToHexString:(NSUInteger)arg0 len:(NSUInteger)arg1 ;


@end


#endif