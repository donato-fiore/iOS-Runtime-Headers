// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERSECTION_H
#define AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERSECTION_H

@class NSString, NSArray;
@protocol AVTAvatarAttributeEditorSection, AVTAvatarAttributeEditorSectionSupplementalPicker;

#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorSectionOptions.h"

@interface AVTAvatarAttributeEditorMulticolorPickerSection : NSObject <AVTAvatarAttributeEditorSection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger intendedDestination; // ivar: _intendedDestination
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSArray *sectionItems; // ivar: _sectionItems
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) UIEdgeInsets separatorInsets;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker; // ivar: _supplementalPicker


-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg0 ;
-(BOOL)shouldDisplayTitle;
-(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 items:(id)arg2 ;


@end


#endif