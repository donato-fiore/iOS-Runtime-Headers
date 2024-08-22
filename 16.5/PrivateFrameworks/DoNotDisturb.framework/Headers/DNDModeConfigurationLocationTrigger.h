// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMODECONFIGURATIONLOCATIONTRIGGER_H
#define DNDMODECONFIGURATIONLOCATIONTRIGGER_H

@class NSString, CLCircularRegion;


#import "DNDModeConfigurationTrigger.h"

@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger

@property (readonly, copy, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, copy, nonatomic) CLCircularRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(BOOL)hasSecureData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 detail:(id)arg1 enabledSetting:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif