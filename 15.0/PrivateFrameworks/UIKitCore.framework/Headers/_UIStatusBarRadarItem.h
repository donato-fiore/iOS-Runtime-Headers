// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARRADARITEM_H
#define _UISTATUSBARRADARITEM_H

@class UIStatusBarIndicatorItem;


#import "_UIStatusBarRadarView.h"

@interface _UIStatusBarRadarItem : UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarRadarView *radarItemView; // ivar: _radarItemView


-(id)imageForUpdate:(id)arg0 ;
-(id)imageView;
-(id)indicatorEntryKey;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif