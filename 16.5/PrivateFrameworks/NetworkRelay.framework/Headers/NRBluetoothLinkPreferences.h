// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRBLUETOOTHLINKPREFERENCES_H
#define NRBLUETOOTHLINKPREFERENCES_H

@class NSNumber;


#import "NRLinkPreferences.h"

@interface NRBluetoothLinkPreferences : NRLinkPreferences

@property (retain, nonatomic) NSNumber *inputBytesPerSecond; // ivar: _inputBytesPerSecond
@property (retain, nonatomic) NSNumber *outputBytesPerSecond; // ivar: _outputBytesPerSecond
@property (retain, nonatomic) NSNumber *packetsPerSecond; // ivar: _packetsPerSecond
@property (nonatomic) BOOL reportedToABC; // ivar: _reportedToABC
@property (nonatomic) NSUInteger startTime; // ivar: _startTime


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNotEmpty;
-(NSUInteger)hash;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
-(id)copyShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)combinePreferences:(id)arg0 ;


@end


#endif