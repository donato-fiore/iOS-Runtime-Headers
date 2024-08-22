// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIASESTIMATORFEATURES_H
#define BIASESTIMATORFEATURES_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BiasEstimatorFeatures : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) int antennaMask; // ivar: _antennaMask
@property (copy, nonatomic) NSArray *cirPacket1; // ivar: _cirPacket1
@property (copy, nonatomic) NSArray *cirPacket2; // ivar: _cirPacket2
@property (nonatomic) CGFloat firstPathIndexPacket1; // ivar: _firstPathIndexPacket1
@property (nonatomic) CGFloat firstPathIndexPacket2; // ivar: _firstPathIndexPacket2
@property (nonatomic) CGFloat leadingEdgePacket1; // ivar: _leadingEdgePacket1
@property (nonatomic) CGFloat leadingEdgePacket2; // ivar: _leadingEdgePacket2
@property (nonatomic) CGFloat rssiDbm; // ivar: _rssiDbm
@property (nonatomic) CGFloat rttInitiator; // ivar: _rttInitiator
@property (nonatomic) CGFloat rttResponder; // ivar: _rttResponder
@property (nonatomic) int rxAntennaPacket1; // ivar: _rxAntennaPacket1
@property (nonatomic) int rxAntennaPacket2; // ivar: _rxAntennaPacket2
@property (nonatomic) CGFloat soiRssiDbm; // ivar: _soiRssiDbm
@property (nonatomic) CGFloat tatInitiator; // ivar: _tatInitiator
@property (nonatomic) CGFloat tatResponder; // ivar: _tatResponder
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat toaNoiseRms; // ivar: _toaNoiseRms
@property (nonatomic) CGFloat toaPpwinPeak; // ivar: _toaPpwinPeak
@property (nonatomic) CGFloat toaPpwinRms; // ivar: _toaPpwinRms
@property (nonatomic) CGFloat tofPicSecond; // ivar: _tofPicSecond
@property (nonatomic) CGFloat uwbTime; // ivar: _uwbTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBiasEstimatorFeatures:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)populateOrderedInputFeature;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif