// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKOSVERSIONREQUIREMENTRANGE_H
#define PKOSVERSIONREQUIREMENTRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirement.h"

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PKOSVersionRequirement *maximum; // ivar: _maximum
@property (readonly, nonatomic) PKOSVersionRequirement *minimum; // ivar: _minimum


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOSVersionRequirementRange:(id)arg0 ;
-(BOOL)versionMeetsRequirements:(id)arg0 deviceClass:(id)arg1 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMinimumVersion:(id)arg0 maximumVersion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif