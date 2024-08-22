// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYTOPICTAG_H
#define WBSHISTORYTOPICTAG_H

@class NSMutableOrderedSet, NSArray;


#import "WBSHistoryTag.h"

@interface WBSHistoryTopicTag : WBSHistoryTag {
    NSMutableOrderedSet *_taggedItems;
}


@property (readonly, copy, nonatomic) NSArray *historyItems;


+(void)initialize;
-(BOOL)containsHistoryItem:(id)arg0 ;
-(id)initWithTag:(id)arg0 historyItems:(id)arg1 ;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 databaseID:(NSInteger)arg2 modificationTimestamp:(CGFloat)arg3 level:(NSInteger)arg4 ;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)dealloc;
-(void)groupHistoryItemsBySessionWithCompletionHandler:(id)arg0 ;
-(void)removeHistoryItems:(id)arg0 ;
-(void)tagHistoryItem:(id)arg0 ;


@end


#endif