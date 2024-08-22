// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCLOCKITEMSTORAGE_H
#define AFCLOCKITEMSTORAGE_H

@class NSDate, NSMutableDictionary, NSString, NSDictionary;
@protocol AFInvalidating, AFClockItemStorageDelegate;

#import <Foundation/Foundation.h>


@interface AFClockItemStorage : NSObject <AFInvalidating>

 {
    id<AFClockItemStorageDelegate> *_delegate;
    NSInteger _groupingDepth;
    NSUInteger _workingGeneration;
    NSDate *_workingDate;
    NSMutableDictionary *_workingItemsByID;
}


@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *itemsByID; // ivar: _itemsByID
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)itemWithID:(id)arg0 ;
-(void)beginGrouping;
-(void)deleteAllItems;
-(void)deleteItemsWithIDs:(id)arg0 ;
-(void)endGroupingWithOptions:(NSUInteger)arg0 ;
-(void)insertOrUpdateItems:(id)arg0 ;


@end


#endif