// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLINKQUALITY_H
#define WFLINKQUALITY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFLinkQuality : NSObject <NSCopying>



@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) float scaledRssi; // ivar: _scaledRssi
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSSID:(id)arg0 rssi:(NSInteger)arg1 scaledRSSI:(float)arg2 ;


@end


#endif