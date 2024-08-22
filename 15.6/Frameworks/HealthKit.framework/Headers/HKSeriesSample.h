// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSERIESSAMPLE_H
#define HKSERIESSAMPLE_H



#import "HKSample.h"

@interface HKSeriesSample : HKSample {
    uint8_t _count;
}


@property (readonly) NSUInteger count;
@property (nonatomic, getter=_isFrozen, setter=_setFrozen:) BOOL frozen; // ivar: _frozen


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldNotifyOnInsert;
-(id)_validateSample;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)_valueDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif