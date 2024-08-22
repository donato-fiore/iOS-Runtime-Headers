// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONTINUOUSREADINGCONTROLLER_H
#define CONTINUOUSREADINGCONTROLLER_H


#import <Foundation/Foundation.h>

#import "TabController.h"
#import "ContinuousReadingItem.h"

@interface ContinuousReadingController : NSObject {
    TabController *_tabController;
    int _activeDocumentBookmarkID;
    ContinuousReadingItem *_currentContinuousItem;
    ContinuousReadingItem *_nextContinuousItem;
    ContinuousReadingItem *_previousContinuousItem;
}


@property (nonatomic) BOOL unreadReadingListItemsOnly; // ivar: _unreadReadingListItemsOnly


-(id)_itemAtIndex:(unsigned int)arg0 inReadingList:(id)arg1 ;
-(id)_tabDocument;
-(id)currentReadingListItem;
-(id)initWithTabController:(id)arg0 ;
-(id)nextReadingListItem;
-(id)previousReadingListItem;
-(void)_clearCachedItems;
-(void)_updateCachedItemsIfNeeded;
-(void)dealloc;


@end


#endif