// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDECOMPOSEDRELOADUPDATEITEM_H
#define UIDECOMPOSEDRELOADUPDATEITEM_H



#import "UIUpdateItem.h"
#import "UIDecomposedReloadUpdateItem.h"

@interface UIDecomposedReloadUpdateItem : UIUpdateItem

@property (weak, nonatomic) UIDecomposedReloadUpdateItem *pairedItem; // ivar: _pairedItem


-(BOOL)isDecomposedFromReload;


@end


#endif