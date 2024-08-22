// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERCONFIGUREDPROPERTIES_H
#define PRPOSTERCONFIGUREDPROPERTIES_H

@class NSString;
@protocol BSDescriptionStreamable, NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>

#import "PRPosterColorVariationsConfiguration.h"
#import "PRPosterComplicationLayout.h"
#import "PRPosterFocusConfiguration.h"
#import "PRPosterHomeScreenConfiguration.h"
#import "PRPosterRenderingConfiguration.h"
#import "PRPosterSuggestionMetadata.h"
#import "PRPosterTitleStyleConfiguration.h"

@interface PRPosterConfiguredProperties : NSObject <BSDescriptionStreamable, NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying>



@property (copy, nonatomic) PRPosterColorVariationsConfiguration *colorVariationsConfiguration; // ivar: _colorVariationsConfiguration
@property (copy, nonatomic) PRPosterComplicationLayout *complicationLayout; // ivar: _complicationLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration; // ivar: _focusConfiguration
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration; // ivar: _homeScreenConfiguration
@property (copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration; // ivar: _renderingConfiguration
@property (copy, nonatomic) PRPosterSuggestionMetadata *suggestionMetadata; // ivar: _suggestionMetadata
@property (readonly) Class superclass;
@property (copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration; // ivar: _titleStyleConfiguration


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)configuredPropertiesSanitizedForPassingToExtension:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguredProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleStyleConfiguration:(id)arg0 focusConfiguration:(id)arg1 complicationLayout:(id)arg2 renderingConfiguration:(id)arg3 homeScreenConfiguration:(id)arg4 colorVariationsConfiguration:(id)arg5 suggestionMetadata:(id)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif