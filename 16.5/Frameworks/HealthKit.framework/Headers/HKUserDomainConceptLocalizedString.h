// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDOMAINCONCEPTLOCALIZEDSTRING_H
#define HKUSERDOMAINCONCEPTLOCALIZEDSTRING_H

@class NSString;


#import "HKUserDomainConceptProperty.h"

@interface HKUserDomainConceptLocalizedString : HKUserDomainConceptProperty

@property (readonly, copy, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
+(id)_propertiesByLocale:(id)arg0 ;
+(id)mergeListsOfPropertiesWithType:(NSInteger)arg0 intoListOfProperties:(id)arg1 fromListOfProperties:(id)arg2 options:(NSUInteger)arg3 ;
+(id)nullPropertyWithType:(NSInteger)arg0 locale:(id)arg1 version:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 locale:(id)arg2 version:(NSInteger)arg3 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 locale:(id)arg2 version:(NSInteger)arg3 timestamp:(CGFloat)arg4 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 locale:(id)arg2 version:(NSInteger)arg3 timestamp:(CGFloat)arg4 deleted:(BOOL)arg5 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 timestamp:(CGFloat)arg2 deleted:(BOOL)arg3 ;
-(id)valueDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif