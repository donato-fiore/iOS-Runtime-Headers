// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTION_H
#define AVTAVATARATTRIBUTEEDITORSECTION_H

@class NSString, NSArray;
@protocol AVTAvatarAttributeEditorSection, AVTAvatarAttributeEditorSectionSupplementalPicker;

#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorSectionOptions.h"

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger intendedDestination; // ivar: _intendedDestination
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSArray *sectionItems; // ivar: _sectionItems
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) UIEdgeInsets separatorInsets;
@property (nonatomic) BOOL shouldDisplayInsetSeparatorAfterSection; // ivar: _shouldDisplayInsetSeparatorAfterSection
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker; // ivar: _supplementalPicker


-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg0 ;
-(BOOL)shouldDisplayTitle;
-(id)initWithSectionItems:(id)arg0 localizedName:(id)arg1 identifier:(id)arg2 intendedDestination:(NSUInteger)arg3 options:(id)arg4 ;


@end


#endif