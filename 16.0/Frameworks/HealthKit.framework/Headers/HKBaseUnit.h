// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKBASEUNIT_H
#define HKBASEUNIT_H

@class NSString;
@protocol _HKFactor;


#import "HKUnit.h"
#import "_HKBaseDimension.h"

@interface HKBaseUnit : HKUnit <_HKFactor>

 {
    NSString *_unitString;
    NSString *_prefix;
    NSString *_root;
    BOOL _uniqued;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _HKBaseDimension *dimension;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat proportionalSize; // ivar: _proportionalSize
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_rootUnitWithDefinition:(struct ? )arg0 ;
+(id)_uniquedRootUnit:(id)arg0 ;
+(id)_uniquedRootUnitFromDefinition:(struct ? )arg0 ;
+(id)_uniquedUnitWithPrefix:(id)arg0 conversionConstant:(id)arg1 rootUnit:(id)arg2 ;
+(id)_uniquedUnitWithPrefix:(id)arg0 rootUnit:(id)arg1 ;
+(id)unitFromString:(id)arg0 ;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(*CGFloat)arg0 withCycleSet:(id)arg1 ;
-(id)_initWithUnitString:(id)arg0 proportionalSize:(CGFloat)arg1 scaleOffset:(CGFloat)arg2 ;
-(id)_unitByPrefixing:(id)arg0 withConversionConstant:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)unitString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif