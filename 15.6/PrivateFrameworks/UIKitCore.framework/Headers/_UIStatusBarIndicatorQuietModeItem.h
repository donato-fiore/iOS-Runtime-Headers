// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARINDICATORQUIETMODEITEM_H
#define _UISTATUSBARINDICATORQUIETMODEITEM_H

@class UIStatusBarIndicatorItem, NSString;


#import "_UIStatusBarImageView.h"

@interface _UIStatusBarIndicatorQuietModeItem : UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarImageView *emphasizedImageView; // ivar: _emphasizedImageView
@property (retain, nonatomic) NSString *focusName; // ivar: _focusName


+(id)emphasizedQuietModeIdentifier;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)imageViewForIdentifier:(id)arg0 ;
-(id)indicatorEntryKey;
-(id)systemImageNameForUpdate:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif