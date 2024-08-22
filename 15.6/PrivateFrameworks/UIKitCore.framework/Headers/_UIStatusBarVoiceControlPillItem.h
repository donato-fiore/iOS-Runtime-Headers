// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVOICECONTROLPILLITEM_H
#define _UISTATUSBARVOICECONTROLPILLITEM_H

@class UIStatusBarVoiceControlItem;


#import "_UIStatusBarPillView.h"

@interface _UIStatusBarVoiceControlPillItem : UIStatusBarVoiceControlItem

@property (nonatomic) CGSize pillSize; // ivar: _pillSize
@property (retain, nonatomic) _UIStatusBarPillView *pillView; // ivar: _pillView


-(BOOL)_pulsingForVoiceControlType:(NSInteger)arg0 ;
-(CGFloat)imageOpacityForVoiceControlType:(NSInteger)arg0 ;
-(id)_backgroundColorForVoiceControlType:(NSInteger)arg0 styleAttributes:(id)arg1 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif