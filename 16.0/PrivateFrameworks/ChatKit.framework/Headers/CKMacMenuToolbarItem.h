// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMACMENUTOOLBARITEM_H
#define CKMACMENUTOOLBARITEM_H

@class UIMenu;


#import "CKMacToolbarItem.h"

@interface CKMacMenuToolbarItem : CKMacToolbarItem

@property (retain, nonatomic) UIMenu *menu; // ivar: _menu


-(id)initWithItemIdentifier:(id)arg0 menu:(id)arg1 ;


@end


#endif