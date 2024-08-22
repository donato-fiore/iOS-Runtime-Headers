// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VN1VLYVSH30UQ26TGBOV8MHV_H
#define VN1VLYVSH30UQ26TGBOV8MHV_H

@class NSDictionary, NSArray;


#import "VNObservation.h"

@interface VN1vLyVSh30UQ26TGBoV8MHv : VNObservation {
    NSDictionary *_adjustments;
}


@property (readonly, copy) NSArray *adjustmentKeys;


+(BOOL)supportsSecureCoding;
-(BOOL)hasAdjustmentForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjustmentValuesForKey:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 adjustments:(id)arg1 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif