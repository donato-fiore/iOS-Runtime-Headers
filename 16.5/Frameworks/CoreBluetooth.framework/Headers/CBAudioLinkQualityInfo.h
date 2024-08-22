// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBAUDIOLINKQUALITYINFO_H
#define CBAUDIOLINKQUALITYINFO_H

@class NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable>



@property (nonatomic) unsigned int bitRate; // ivar: _bitRate
@property (nonatomic) char codecType; // ivar: _codecType
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) CGFloat jitterBufferSeconds; // ivar: _jitterBufferSeconds
@property (nonatomic) char noiseFloor90; // ivar: _noiseFloor90
@property (nonatomic) CGFloat retransmitRate; // ivar: _retransmitRate
@property (nonatomic) char rssiAverage; // ivar: _rssiAverage
@property (nonatomic) char signalToNoiseRatio; // ivar: _signalToNoiseRatio


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif