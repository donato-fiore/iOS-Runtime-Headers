// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHAPPLIBRARYVISUALCONFIGURATION_H
#define SBHAPPLIBRARYVISUALCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBHSearchVisualConfiguration.h"

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>



@property (retain, nonatomic) SBHSearchVisualConfiguration *activeSearchVisualConfiguration; // ivar: _activeSearchVisualConfiguration
@property (retain, nonatomic) SBHSearchVisualConfiguration *compactSearchVisualConfiguration; // ivar: _compactSearchVisualConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize expandedCategoryPodIconSpacing; // ivar: _expandedCategoryPodIconSpacing
@property (retain, nonatomic) SBHSearchVisualConfiguration *extendedSearchVisualConfiguration; // ivar: _extendedSearchVisualConfiguration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize landscapeCategoryPodIconSpacing; // ivar: _landscapeCategoryPodIconSpacing
@property (nonatomic) CGSize portraitCategoryPodIconSpacing; // ivar: _portraitCategoryPodIconSpacing
@property (nonatomic) CGFloat searchContinuousCornerRadius; // ivar: _searchContinuousCornerRadius
@property (retain, nonatomic) SBHSearchVisualConfiguration *standardSearchVisualConfiguration; // ivar: _standardSearchVisualConfiguration
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesInsetPlatterSearchAppearance; // ivar: _usesInsetPlatterSearchAppearance


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif