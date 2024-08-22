// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSIDEBARITEMCHANGEDETAILS_H
#define PXSIDEBARITEMCHANGEDETAILS_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>

#import "PXArrayChangeDetails.h"
#import "PXDataSection.h"

@interface PXSidebarItemChangeDetails : NSObject

@property (readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails; // ivar: _arrayChangeDetails
@property (readonly, nonatomic) NSArray *changedItems; // ivar: _changedItems
@property (readonly, nonatomic) BOOL hasContentChanges; // ivar: _hasContentChanges
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) BOOL needsReload; // ivar: _needsReload
@property (readonly, nonatomic) PXDataSection *previousDataSection; // ivar: _previousDataSection
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes;
@property (readonly, nonatomic) NSArray *removedItems; // ivar: _removedItems


+(void)makeArrayIndexMovesIncremental:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)changedIndexes;
-(id)description;
-(id)initWithArrayChangeDetails:(id)arg0 previousDataSection:(id)arg1 ;
-(void)enumerateMovedIndexesUsingBlock:(id)arg0 ;


@end


#endif