// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMKERNELSAMPLEOFDMDESENSE_H
#define WIFIUSAGELQMKERNELSAMPLEOFDMDESENSE_H

@class NSString, NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleOfdmDesense : WiFiUsageLQMSample

@property (nonatomic) NSUInteger bPhyDesense; // ivar: _bPhyDesense
@property (retain, nonatomic) NSString *desenseReason; // ivar: _desenseReason
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger ofdmDesense; // ivar: _ofdmDesense
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)allLQMProperties;
+(id)featureFromFieldName:(id)arg0 ;
+(id)sampleWithStruct:(struct ? *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct ? *)arg0 andTimestamp:(id)arg1 ;


@end


#endif