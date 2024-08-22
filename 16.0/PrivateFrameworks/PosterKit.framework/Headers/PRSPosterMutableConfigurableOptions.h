// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSPOSTERMUTABLECONFIGURABLEOPTIONS_H
#define PRSPOSTERMUTABLECONFIGURABLEOPTIONS_H

@class NSArray;


#import "PRPosterConfigurableOptions.h"
#import "PRPosterDescriptorHomeScreenConfiguration.h"

@interface PRSPosterMutableConfigurableOptions : PRPosterConfigurableOptions

@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;


@end


#endif