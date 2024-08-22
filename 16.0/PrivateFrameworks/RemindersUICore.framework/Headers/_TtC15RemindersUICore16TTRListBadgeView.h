// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15REMINDERSUICORE16TTRLISTBADGEVIEW_H
#define _TTC15REMINDERSUICORE16TTRLISTBADGEVIEW_H

@class UIView, NSString, NSArray;



@interface _TtC15RemindersUICore16TTRListBadgeView : UIView {
    ? listColorInfo;
    ? emoji;
    ? emojiFontSize;
    ? imageParams;
    ? selected;
    ? isContextMenuTarget;
    ? backgroundParams;
    ? shadowParams;
    ? selectionParams;
    ? contentInset;
    ? backgroundLayer;
    ? selectedLayer;
    ? shadowLayer;
    ? imageView;
    ? emojiView;
    ? customSmartListActionViews;
    ? nonEmojiBackgroundLayerGradientSettings;
    ? emojiBackgroundLayerGradientSettings;
    ? layerColorsDirty;
    ? ttrAccessibilityName;
    ? accessibilityDelegate;
}


@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) BOOL ttrAccessibilityShouldIgnoreAccessibilityName; // ivar: ttrAccessibilityShouldIgnoreAccessibilityName
@property (nonatomic) BOOL ttrAccessibilityShouldIgnoreTintColorValue; // ivar: ttrAccessibilityShouldIgnoreTintColorValue


-(BOOL)accessibilityActivate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif