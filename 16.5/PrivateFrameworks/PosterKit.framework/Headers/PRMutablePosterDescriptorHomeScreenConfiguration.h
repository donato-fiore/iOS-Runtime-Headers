// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMUTABLEPOSTERDESCRIPTORHOMESCREENCONFIGURATION_H
#define PRMUTABLEPOSTERDESCRIPTORHOMESCREENCONFIGURATION_H

@class NSArray;


#import "PRPosterDescriptorHomeScreenConfiguration.h"

@interface PRMutablePosterDescriptorHomeScreenConfiguration : PRPosterDescriptorHomeScreenConfiguration

@property (nonatomic) BOOL allowsModifyingLegibilityBlur;
@property (copy, nonatomic) NSArray *preferredGradientColors;
@property (copy, nonatomic) NSArray *preferredSolidColors;
@property (nonatomic) NSUInteger preferredStyle;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;


@end


#endif