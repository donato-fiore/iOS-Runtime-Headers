// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASETTINGSPRESETCONFIGURATION_H
#define FASETTINGSPRESETCONFIGURATION_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FASettingsPresetConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *values; // ivar: _values


+(BOOL)supportsSecureCoding;
+(id)boolKeys;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidBoolValue:(id)arg0 ;
-(BOOL)isValidTriState:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithValues:(id)arg0 ;
-(id)validatedValuesFromValues:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif