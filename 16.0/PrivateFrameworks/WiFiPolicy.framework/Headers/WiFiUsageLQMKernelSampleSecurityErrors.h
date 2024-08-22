// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMKERNELSAMPLESECURITYERRORS_H
#define WIFIUSAGELQMKERNELSAMPLESECURITYERRORS_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleSecurityErrors : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger rxUcastReplayError; // ivar: _rxUcastReplayError
@property (nonatomic) NSUInteger rxmcastDecryptError; // ivar: _rxmcastDecryptError
@property (nonatomic) NSUInteger rxmcastReplayError; // ivar: _rxmcastReplayError
@property (nonatomic) NSUInteger rxucastDecryptError; // ivar: _rxucastDecryptError
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)featureFromFieldName:(id)arg0 ;
+(id)sampleWithStruct:(struct rxSecurityInfo *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct rxSecurityInfo *)arg0 andTimestamp:(id)arg1 ;


@end


#endif