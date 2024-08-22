// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERMUTABLECONFIGURABLEOPTIONS_H
#define PRPOSTERMUTABLECONFIGURABLEOPTIONS_H

@class NSString, NSArray;


#import "PRPosterConfigurableOptions.h"
#import "PRPosterDescriptorHomeScreenConfiguration.h"

@interface PRPosterMutableConfigurableOptions : PRPosterConfigurableOptions

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;


@end


#endif