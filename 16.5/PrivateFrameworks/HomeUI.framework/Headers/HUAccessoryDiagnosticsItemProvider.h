// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYDIAGNOSTICSITEMPROVIDER_H
#define HUACCESSORYDIAGNOSTICSITEMPROVIDER_H

@class HFItemProvider, NSMutableSet;


#import "HUAccessoryDiagnosticsItemManager.h"

@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *diagnosticItems; // ivar: _diagnosticItems
@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *itemManager; // ivar: _itemManager


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif