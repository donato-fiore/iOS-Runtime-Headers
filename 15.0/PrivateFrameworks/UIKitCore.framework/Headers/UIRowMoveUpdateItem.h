// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIROWMOVEUPDATEITEM_H
#define UIROWMOVEUPDATEITEM_H

@class NSIndexPath;


#import "UIUpdateItem.h"

@interface UIRowMoveUpdateItem : UIUpdateItem {
    NSIndexPath *_newIndexPath;
}




-(id)collectionViewUpdateItem;
-(id)initWithOldIndexPath:(id)arg0 newIndexPath:(id)arg1 ;
-(id)newIndexPath;


@end


#endif