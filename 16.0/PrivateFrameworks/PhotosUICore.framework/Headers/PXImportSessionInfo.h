// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTSESSIONINFO_H
#define PXIMPORTSESSIONINFO_H

@class NSDate, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface PXImportSessionInfo : NSObject

@property (nonatomic) NSInteger completedItemsCount; // ivar: _completedItemsCount
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSMutableArray *errorItems; // ivar: _errorItems
@property (nonatomic) BOOL importComplete; // ivar: _importComplete
@property (nonatomic) BOOL importStopped; // ivar: _importStopped
@property (retain, nonatomic) NSMutableArray *importedItems; // ivar: _importedItems
@property (retain, nonatomic) NSArray *itemsToImport; // ivar: _itemsToImport
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate




@end


#endif