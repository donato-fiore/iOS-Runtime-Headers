// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSETTINGSALERTCUSTOMVIEWCONTAINER_H
#define _SFSETTINGSALERTCUSTOMVIEWCONTAINER_H

@class UIView, NSString;
@protocol SFSettingsAlertItemView, SFSettingsAlertItemViewDelegate;


#import "_SFSettingsAlertItemBackgroundView.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView>

 {
    _SFSettingsAlertItemBackgroundView *_backgroundView;
}


@property (readonly, nonatomic) NSInteger backgroundMode;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultBackgroundMode; // ivar: _defaultBackgroundMode
@property (weak, nonatomic) NSObject<SFSettingsAlertItemViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesSeparator; // ivar: _hidesSeparator
@property (weak, nonatomic) _SFSettingsAlertItem *item; // ivar: _item
@property (readonly) Class superclass;


-(id)initWithContentView:(id)arg0 ;


@end


#endif