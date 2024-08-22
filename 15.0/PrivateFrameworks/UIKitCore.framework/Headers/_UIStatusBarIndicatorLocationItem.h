// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARINDICATORLOCATIONITEM_H
#define _UISTATUSBARINDICATORLOCATIONITEM_H

@class UIStatusBarIndicatorItem;


#import "_UIStatusBarImageView.h"

@interface _UIStatusBarIndicatorLocationItem : UIStatusBarIndicatorItem

@property (nonatomic) NSInteger previousType; // ivar: _previousType
@property (retain, nonatomic) _UIStatusBarImageView *prominentImageView; // ivar: _prominentImageView


+(id)groupWithPriority:(NSInteger)arg0 ;
+(id)prominentDisplayIdentifier;
-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)indicatorEntryKey;
-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 ;
-(id)overriddenStyleAttributesForData:(id)arg0 identifier:(id)arg1 ;
-(id)systemImageNameForUpdate:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif