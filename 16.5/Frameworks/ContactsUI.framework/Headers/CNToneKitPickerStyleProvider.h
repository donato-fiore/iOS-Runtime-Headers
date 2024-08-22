// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNTONEKITPICKERSTYLEPROVIDER_H
#define CNTONEKITPICKERSTYLEPROVIDER_H

@class NSString, UIColor, UIFont;
@protocol TKTonePickerStyleProvider, TKVibrationPickerStyleProvider;

#import <Foundation/Foundation.h>


@interface CNToneKitPickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property (readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property (readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property (readonly, nonatomic) NSInteger tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@property (readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property (readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property (readonly, nonatomic) UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property (readonly, nonatomic) UIOffset tonePickerHeaderTextShadowOffset;
@property (readonly, nonatomic) BOOL tonePickerHeaderTextShouldBeUppercase;
@property (readonly, nonatomic) NSInteger tonePickerTableViewSeparatorStyle;
@property (readonly, nonatomic) BOOL tonePickerUsesOpaqueBackground;
@property (readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property (readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property (readonly, nonatomic) UIColor *vibrationPickerCustomBackgroundColor;
@property (readonly, nonatomic) NSInteger vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
@property (readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property (readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property (readonly, nonatomic) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property (readonly, nonatomic) UIOffset vibrationPickerHeaderTextShadowOffset;
@property (readonly, nonatomic) BOOL vibrationPickerHeaderTextShouldBeUppercase;
@property (readonly, nonatomic) NSInteger vibrationPickerTableViewSeparatorStyle;
@property (readonly, nonatomic) BOOL vibrationPickerUsesOpaqueBackground;
@property (readonly, nonatomic) BOOL wantsCustomTonePickerHeaderView;
@property (readonly, nonatomic) BOOL wantsCustomVibrationPickerHeaderView;


-(id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg0 ;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg0 ;


@end


#endif