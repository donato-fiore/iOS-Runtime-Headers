// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPCONNECTIONINFO_H
#define NSPCONNECTIONINFO_H

@class NSDictionary, NSString, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSPConnectionInfo : NSObject <NSSecureCoding>

 {
    NSInteger _fallbackReason;
}


@property (nonatomic) NSInteger IPType; // ivar: _IPType
@property (retain, nonatomic) NSDictionary *TCPInfo; // ivar: _TCPInfo
@property (nonatomic) BOOL TFOSucceeded; // ivar: _TFOSucceeded
@property (nonatomic) CGFloat connectionDelay; // ivar: _connectionDelay
@property (retain, nonatomic) NSString *edgeAddress; // ivar: _edgeAddress
@property (nonatomic) NSInteger edgeType; // ivar: _edgeType
@property (retain, nonatomic) NSDictionary *exceptions; // ivar: _exceptions
@property (nonatomic) CGFloat fallbackDelay; // ivar: _fallbackDelay
@property (nonatomic) NSInteger fallbackReason;
@property (readonly, nonatomic) NSInteger fallbackReasonCategory; // ivar: _fallbackReasonCategory
@property (nonatomic) CGFloat firstTxByteDelay; // ivar: _firstTxByteDelay
@property (retain, nonatomic) NSDate *firstTxByteTimeStamp; // ivar: _firstTxByteTimeStamp
@property (nonatomic) NSUInteger initialBytesLeftOver; // ivar: _initialBytesLeftOver
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) NSInteger interfaceType; // ivar: _interfaceType
@property (nonatomic) BOOL isMultipath; // ivar: _isMultipath
@property (nonatomic) BOOL isTFOProbeSucceeded; // ivar: _isTFOProbeSucceeded
@property (nonatomic) NSUInteger minimumRTT; // ivar: _minimumRTT
@property (nonatomic) NSUInteger multipathConnectedSubflowCount; // ivar: _multipathConnectedSubflowCount
@property (nonatomic) NSUInteger multipathPrimarySubflowInterfaceIndex; // ivar: _multipathPrimarySubflowInterfaceIndex
@property (nonatomic) NSUInteger multipathSubflowCount; // ivar: _multipathSubflowCount
@property (retain, nonatomic) NSDictionary *multipathSubflowSwitchCounts; // ivar: _multipathSubflowSwitchCounts
@property (nonatomic) NSInteger pathType; // ivar: _pathType
@property (nonatomic) CGFloat timeIntervalSinceLastUsage; // ivar: _timeIntervalSinceLastUsage
@property (nonatomic) CGFloat timeToFirstByte; // ivar: _timeToFirstByte
@property (retain, nonatomic) NSArray *timingIntervals; // ivar: _timingIntervals
@property (nonatomic) NSInteger tunnelConnectionError; // ivar: _tunnelConnectionError


+(BOOL)shouldMoveToNextEdgeForFallbackReason:(NSInteger)arg0 ;
+(BOOL)shouldResolveForFallbackReason:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)getFallbackReasonDescription:(NSInteger)arg0 ;
+(int)fallbackReasonToErrno:(NSInteger)arg0 ;
-(id)copyDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)timingIntervalAtIndex:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif