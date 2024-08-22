// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBLEDEVICE_H
#define SFBLEDEVICE_H

@class NSData, NSDictionary, NSUUID, NSString, RPIdentity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFProximityEstimator.h"

@interface SFBLEDevice : NSObject <NSSecureCoding>

 {
    char _rssiHistory;
    unsigned char _rssiCount;
    unsigned char _rssiIndex;
}


@property (copy, nonatomic) NSData *advertisementData; // ivar: _advertisementData
@property (copy, nonatomic) NSDictionary *advertisementFields; // ivar: _advertisementFields
@property (copy, nonatomic) NSData *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) SFProximityEstimator *closeProximityEstimatorMedium; // ivar: _closeProximityEstimatorMedium
@property (retain, nonatomic) SFProximityEstimator *closeProximityEstimatorSmall; // ivar: _closeProximityEstimatorSmall
@property (nonatomic) unsigned int connectedServices; // ivar: _connectedServices
@property (copy, nonatomic) NSUUID *counterpartIdentifier; // ivar: _counterpartIdentifier
@property (nonatomic) NSInteger distance; // ivar: _distance
@property (nonatomic) NSUInteger foundTicks; // ivar: _foundTicks
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) SFProximityEstimator *infoProximityEstimator; // ivar: _infoProximityEstimator
@property (nonatomic) BOOL insideBubble; // ivar: _insideBubble
@property (nonatomic) BOOL insideMediumBubble; // ivar: _insideMediumBubble
@property (nonatomic) BOOL insideSmallBubble; // ivar: _insideSmallBubble
@property (nonatomic) CGFloat lastSeen; // ivar: _lastSeen
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat pairCheckTime; // ivar: _pairCheckTime
@property (nonatomic) BOOL paired; // ivar: _paired
@property (nonatomic) unsigned int productID2; // ivar: _productID2
@property (retain, nonatomic) SFProximityEstimator *proxPairProximityEstimator; // ivar: _proxPairProximityEstimator
@property (retain, nonatomic) RPIdentity *rpIdentity; // ivar: _rpIdentity
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) NSInteger rssiCeiling; // ivar: _rssiCeiling
@property (nonatomic) int rssiEstimate; // ivar: _rssiEstimate
@property (nonatomic) NSInteger rssiFloor; // ivar: _rssiFloor
@property (retain, nonatomic) SFProximityEstimator *setupProximityEstimator; // ivar: _setupProximityEstimator
@property (nonatomic) NSInteger smoothedRSSI; // ivar: _smoothedRSSI
@property (nonatomic) BOOL tempPaired; // ivar: _tempPaired
@property (nonatomic) BOOL triggered; // ivar: _triggered
@property (nonatomic) BOOL useBTPipe; // ivar: _useBTPipe


+(BOOL)supportsSecureCoding;
+(void)setRSSIEstimatorInfo:(id)arg0 ;
-(BOOL)updateRSSI:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif