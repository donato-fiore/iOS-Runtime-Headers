// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSETTINGSALERTCUSTOMVIEWCONTAINER_H
#define _SFSETTINGSALERTCUSTOMVIEWCONTAINER_H

@class UIView, NSAttributedString, NSString, UIImage;
@protocol SFSettingsAlertItemView, SFSettingsAlertItemViewDelegate;


#import "_SFSettingsAlertItemBackgroundView.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView>

 {
    _SFSettingsAlertItemBackgroundView *_backgroundView;
}


@property (copy, nonatomic) NSAttributedString *attributedDetailText; // ivar: attributedDetailText
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: attributedText
@property (readonly, nonatomic) NSInteger backgroundMode;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultBackgroundMode; // ivar: _defaultBackgroundMode
@property (weak, nonatomic) NSObject<SFSettingsAlertItemViewDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: detailText
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesSeparator; // ivar: _hidesSeparator
@property (retain, nonatomic) UIImage *image; // ivar: image
@property (weak, nonatomic) _SFSettingsAlertItem *item; // ivar: _item
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: selected
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: text


-(id)initWithContentView:(id)arg0 ;


@end


#endif