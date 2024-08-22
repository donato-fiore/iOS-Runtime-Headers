// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDENHANCEDFTMSDATA_H
#define HDENHANCEDFTMSDATA_H

@class NSNumber, NSDate;
@protocol HDDatumRendering;


#import "HDHealthServiceCharacteristic.h"

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering>

 {
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}


@property (readonly, nonatomic) NSDate *updateTime;


+(id)_buildWithBinaryValue:(id)arg0 error:(*id)arg1 ;
+(id)uuid;
-(id)description;
-(id)generateDatums:(id)arg0 ;
-(id)getBinaryValueWithError:(*id)arg0 ;


@end


#endif