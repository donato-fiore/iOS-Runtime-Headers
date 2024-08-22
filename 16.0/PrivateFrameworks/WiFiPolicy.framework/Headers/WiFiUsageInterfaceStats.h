// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGEINTERFACESTATS_H
#define WIFIUSAGEINTERFACESTATS_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiUsageInterfaceStats : NSObject <NSCopying>



@property (nonatomic) NSUInteger rxBytes; // ivar: _rxBytes
@property (nonatomic) NSUInteger rxL3Packets; // ivar: _rxL3Packets
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger txBytes; // ivar: _txBytes
@property (nonatomic) NSUInteger txL3Packets; // ivar: _txL3Packets


+(id)statsForInterfaceName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif