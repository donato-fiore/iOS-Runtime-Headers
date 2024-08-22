// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYDATUM_H
#define HDQUANTITYDATUM_H

@class NSDictionary, HKQuantity;


#import "HDDataCollectorSensorDatum.h"

@interface HDQuantityDatum : HDDataCollectorSensorDatum

@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) HKQuantity *quantity; // ivar: _quantity
@property (copy, nonatomic) id *saveCompletion; // ivar: _saveCompletion


+(BOOL)supportsSecureCoding;
+(id)hdt_quantityDatumForType:(id)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 value:(CGFloat)arg3 ;
// +(id)quantityDataForDifferencesInData:(id)arg0 baseDatum:(id)arg1 unit:(id)arg2 differenceHandler:(id)arg3 intervalHandler:(unk)arg4  ;
+(id)quantityDatumWithHKQuantityDatum:(id)arg0 metadata:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)datumForChangeSince:(id)arg0 newIdentifier:(id)arg1 newResumeContext:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 quantity:(id)arg2 metadata:(id)arg3 resumeContextProvider:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 resumeContext:(id)arg2 quantity:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif