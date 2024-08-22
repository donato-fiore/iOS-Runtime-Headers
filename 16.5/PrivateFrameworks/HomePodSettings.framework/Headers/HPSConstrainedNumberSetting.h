// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSCONSTRAINEDNUMBERSETTING_H
#define HPSCONSTRAINEDNUMBERSETTING_H

@class NSNumber;


#import "HPSNumberSetting.h"

@interface HPSConstrainedNumberSetting : HPSNumberSetting

@property (readonly, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly, nonatomic) NSNumber *stepValue; // ivar: _stepValue


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 numberValue:(id)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 stepValue:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif