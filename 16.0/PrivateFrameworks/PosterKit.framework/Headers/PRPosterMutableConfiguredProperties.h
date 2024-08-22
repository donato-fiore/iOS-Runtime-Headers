// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERMUTABLECONFIGUREDPROPERTIES_H
#define PRPOSTERMUTABLECONFIGUREDPROPERTIES_H



#import "PRPosterConfiguredProperties.h"
#import "PRPosterColorVariationsConfiguration.h"
#import "PRPosterComplicationLayout.h"
#import "PRPosterFocusConfiguration.h"
#import "PRPosterHomeScreenConfiguration.h"
#import "PRPosterRenderingConfiguration.h"
#import "PRPosterSuggestionMetadata.h"
#import "PRPosterTitleStyleConfiguration.h"

@interface PRPosterMutableConfiguredProperties : PRPosterConfiguredProperties

@property (copy, nonatomic) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (copy, nonatomic) PRPosterComplicationLayout *complicationLayout;
@property (copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration;
@property (copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (copy, nonatomic) PRPosterSuggestionMetadata *suggestionMetadata;
@property (copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(void)mergeConfiguredProperties:(id)arg0 ;


@end


#endif