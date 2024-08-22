// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNGUIDANCESIGNINFO_H
#define MNGUIDANCESIGNINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNGuidanceSignDescription.h"

@interface MNGuidanceSignInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat primaryDistance_SIRI_USE_ONLY; // ivar: _primaryDistance_SIRI_USE_ONLY
@property (readonly, nonatomic) MNGuidanceSignDescription *primarySign; // ivar: _primarySign
@property (readonly, nonatomic) CGFloat secondaryDistance_SIRI_USE_ONLY; // ivar: _secondaryDistance_SIRI_USE_ONLY
@property (readonly, nonatomic) MNGuidanceSignDescription *secondarySign; // ivar: _secondarySign
@property (readonly, nonatomic) NSUInteger stepIndex; // ivar: _stepIndex
@property (readonly, nonatomic) CGFloat timeUntilPrimarySign_SIRI_USE_ONLY; // ivar: _timeUntilPrimarySign_SIRI_USE_ONLY
@property (readonly, nonatomic) CGFloat timeUntilSecondarySign_SIRI_USE_ONLY; // ivar: _timeUntilSecondarySign_SIRI_USE_ONLY


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimarySign:(id)arg0 secondarySign:(id)arg1 stepIndex:(NSUInteger)arg2 primaryDistance:(CGFloat)arg3 secondaryDistance:(CGFloat)arg4 timeUntilPrimarySign:(CGFloat)arg5 timeUntilSecondarySign:(CGFloat)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif