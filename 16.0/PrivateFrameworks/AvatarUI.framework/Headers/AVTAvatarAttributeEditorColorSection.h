// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORCOLORSECTION_H
#define AVTAVATARATTRIBUTEEDITORCOLORSECTION_H

@class NSString, NSArray;
@protocol AVTAvatarAttributeEditorColorSection, AVTAvatarAttributeEditorSectionSupplementalPicker;

#import <Foundation/Foundation.h>

#import "AVTAvatarColorVariationStore.h"
#import "AVTAvatarAttributeEditorSectionOptions.h"

@interface AVTAvatarAttributeEditorColorSection : NSObject <AVTAvatarAttributeEditorColorSection>



@property (readonly, nonatomic) BOOL alwaysShowExtended; // ivar: _alwaysShowExtended
@property (readonly, nonatomic) AVTAvatarColorVariationStore *colorVariationStore; // ivar: _colorVariationStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *extendedItems; // ivar: _extendedItems
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger intendedDestination; // ivar: _intendedDestination
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSArray *primaryItems; // ivar: _primaryItems
@property (readonly, copy, nonatomic) NSArray *sectionItems;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) UIEdgeInsets separatorInsets;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker; // ivar: _supplementalPicker


-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg0 ;
-(BOOL)shouldDisplayTitle;
-(id)copyWithoutTitle;
-(id)initWithPrimaryItems:(id)arg0 extendedItems:(id)arg1 colorVariationStore:(id)arg2 localizedName:(id)arg3 identifier:(id)arg4 intendedDestination:(NSUInteger)arg5 alwaysShowExtended:(BOOL)arg6 options:(id)arg7 ;


@end


#endif