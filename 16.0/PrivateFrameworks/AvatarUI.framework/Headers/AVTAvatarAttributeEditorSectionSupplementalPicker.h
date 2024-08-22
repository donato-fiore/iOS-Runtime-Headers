// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONSUPPLEMENTALPICKER_H
#define AVTAVATARATTRIBUTEEDITORSECTIONSUPPLEMENTALPICKER_H

@class NSArray, NSString;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorSectionSupplementalPicker : NSObject <AVTAvatarAttributeEditorSectionSupplementalPicker>



@property (readonly, copy, nonatomic) NSArray *choices; // ivar: _choices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly) Class superclass;


// +(id)pickerForMulticolorPicker:(id)arg0 isMultipleSelected:(BOOL)arg1 switchToSingleColorAvatarUpdater:(id)arg2 switchToMultipleColorAvatarUpdater:(unk)arg3  ;
+(id)pickerForPairableModelCategory:(id)arg0 isPaired:(BOOL)arg1 avatarUpdaterOnPair:(id)arg2 ;
+(id)pickerFromEditorSection:(id)arg0 ;
-(id)copyWithLocalizedTitle:(id)arg0 ;
-(id)initWithLocalizedTitle:(id)arg0 choices:(id)arg1 ;


@end


#endif