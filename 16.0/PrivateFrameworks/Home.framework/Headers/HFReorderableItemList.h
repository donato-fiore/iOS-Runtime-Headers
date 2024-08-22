// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFREORDERABLEITEMLIST_H
#define HFREORDERABLEITEMLIST_H



#import "HFReorderableItemListAbstractBase.h"

@interface HFReorderableItemList : HFReorderableItemListAbstractBase {
    ? sortedIdentifiers;
    ? applicationDataKey;
}


@property (nonatomic, readonly) BOOL isEmpty;


-(BOOL)sortedIdentifiersWithIdentifier1:(id)arg0 identifier2:(id)arg1 ;
-(BOOL)sortedItemsWithItem1:(id)arg0 item2:(id)arg1 ;
-(id)initWithApplicationDataContainer:(id)arg0 category:(id)arg1 ;
-(id)saveWithSender:(id)arg0 ;
-(void)setSortedItems:(id)arg0 ;


@end


#endif