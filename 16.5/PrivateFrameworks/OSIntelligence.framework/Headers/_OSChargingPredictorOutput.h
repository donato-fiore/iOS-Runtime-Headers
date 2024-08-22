// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSCHARGINGPREDICTOROUTPUT_H
#define _OSCHARGINGPREDICTOROUTPUT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _OSChargingPredictorOutput : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat chargingDuration; // ivar: _chargingDuration
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) BOOL meetsSystemConfidenceThreshold; // ivar: _meetsSystemConfidenceThreshold


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif