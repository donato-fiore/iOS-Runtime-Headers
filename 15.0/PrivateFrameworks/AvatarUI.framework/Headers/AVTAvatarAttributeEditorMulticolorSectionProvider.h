// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORMULTICOLORSECTIONPROVIDER_H
#define AVTAVATARATTRIBUTEEDITORMULTICOLORSECTIONPROVIDER_H

@class NSString, NSDictionary, NSArray;
@protocol AVTAvatarAttributeEditorSectionProvider;

#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorState.h"
#import "AVTAvatarAttributeEditorMulticolorPickerSection.h"
#import "AVTAvatarAttributeEditorSectionSupplementalPicker.h"

@interface AVTAvatarAttributeEditorMulticolorSectionProvider : NSObject <AVTAvatarAttributeEditorSectionProvider>



@property (readonly, nonatomic, getter=allowsRemoval) BOOL allowsRemoval; // ivar: _allowsRemoval
@property (readonly, nonatomic) AVTAvatarAttributeEditorState *editorState; // ivar: _editorState
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSDictionary *nestedPresetPickers; // ivar: _nestedPresetPickers
@property (retain, nonatomic) NSArray *pickerItems; // ivar: _pickerItems
@property (retain, nonatomic) AVTAvatarAttributeEditorMulticolorPickerSection *pickerSection; // ivar: _pickerSection
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *subpickerRemovalUpdaters; // ivar: _subpickerRemovalUpdaters
@property (retain, nonatomic) NSArray *subpickers; // ivar: _subpickers
@property (readonly, nonatomic) NSArray *subsections; // ivar: _subsections
@property (retain, nonatomic) AVTAvatarAttributeEditorSectionSupplementalPicker *supplementalPicker; // ivar: _supplementalPicker


-(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 subpickers:(id)arg2 nestedPresetPickers:(id)arg3 supplementalPicker:(id)arg4 pickerItems:(id)arg5 editorState:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 subpickers:(id)arg2 subpickerRemovalUpdaters:(id)arg3 nestedPresetPickers:(id)arg4 supplementalPicker:(id)arg5 pickerItems:(id)arg6 editorState:(id)arg7 ;
-(id)initWithLocalizedName:(id)arg0 subpickers:(id)arg1 nestedPresetPickers:(id)arg2 supplementalPicker:(id)arg3 pickerItems:(id)arg4 editorState:(id)arg5 ;
-(void)createPickerSectionIfNeeded;


@end


#endif