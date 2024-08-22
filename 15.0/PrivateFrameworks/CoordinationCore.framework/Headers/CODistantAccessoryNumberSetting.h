// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CODISTANTACCESSORYNUMBERSETTING_H
#define CODISTANTACCESSORYNUMBERSETTING_H

@class NSNumber;


#import "CODistantAccessorySetting.h"

@interface CODistantAccessoryNumberSetting : CODistantAccessorySetting

@property (readonly, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly, nonatomic) NSNumber *stepValue; // ivar: _stepValue


+(BOOL)supportsSecureCoding;
-(id)initWithAccessorySetting:(id)arg0 accessory:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif