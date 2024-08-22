// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSIGNALSTRENGTHMEASUREMENTS_H
#define CTSIGNALSTRENGTHMEASUREMENTS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSignalStrengthMeasurements : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *ecio; // ivar: _ecio
@property (retain, nonatomic) NSNumber *ecn0; // ivar: _ecn0
@property (retain, nonatomic) NSNumber *rscp; // ivar: _rscp
@property (retain, nonatomic) NSNumber *rsrp; // ivar: _rsrp
@property (retain, nonatomic) NSNumber *rsrq; // ivar: _rsrq
@property (retain, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (retain, nonatomic) NSNumber *rxagc; // ivar: _rxagc
@property (retain, nonatomic) NSNumber *snr; // ivar: _snr


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif