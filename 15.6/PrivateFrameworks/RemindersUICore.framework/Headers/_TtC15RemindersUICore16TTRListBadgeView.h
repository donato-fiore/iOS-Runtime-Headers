// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15REMINDERSUICORE16TTRLISTBADGEVIEW_H
#define _TTC15REMINDERSUICORE16TTRLISTBADGEVIEW_H

@class UIView, NSString, NSArray;



@interface _TtC15RemindersUICore16TTRListBadgeView : UIView {
    ? listColor;
    ? emoji;
    ? emojiFontSize;
    ? imageParams;
    ? selected;
    ? backgroundParams;
    ? shadowParams;
    ? selectionParams;
    ? contentInset;
    ? backgroundLayer;
    ? selectedLayer;
    ? shadowLayer;
    ? imageView;
    ? emojiView;
    ? customSmartListActionView;
    ? nonEmojiBackgroundLayerGradientSettings;
    ? emojiBackgroundLayerGradientSettings;
    ? layerColorsDirty;
    ? ttrAccessibilityName;
}


@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) BOOL ttrAccessibilityShouldIgnoreAccessibilityName; // ivar: ttrAccessibilityShouldIgnoreAccessibilityName
@property (nonatomic) BOOL ttrAccessibilityShouldIgnoreTintColorValue; // ivar: ttrAccessibilityShouldIgnoreTintColorValue


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif