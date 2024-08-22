// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPABSTRACTMUTABLELARGEARRAYSEGMENT_H
#define TSPABSTRACTMUTABLELARGEARRAYSEGMENT_H

@class NSMutableArray, NSArray, NSString;
@protocol NSFastEnumeration, TSPMutableLargeArraySegmentDelegate;


#import "TSPObject.h"

@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration>

 {
    unsigned int _delayedArchivingPriority;
    NSMutableArray *_backingStore;
    NSUInteger _mutations;
    NSUInteger _estimatedByteSize;
    NSUInteger _estimatedCost;
}


@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly) NSUInteger count;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (weak, nonatomic) NSObject<TSPMutableLargeArraySegmentDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger estimatedByteSize;
@property (nonatomic) NSUInteger estimatedCost;
@property (readonly, nonatomic) NSMutableArray *mutableArrayWrapper;
@property (copy, nonatomic) NSString *packageLocator; // ivar: _packageLocator
@property (nonatomic) BOOL shouldDelayArchiving; // ivar: _shouldDelayArchiving
@property (nonatomic) BOOL storeOutsideObjectArchive; // ivar: _storeOutsideObjectArchive


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)estimatedByteSizeOfElement:(id)arg0 ;
-(NSUInteger)estimatedCostOfElement:(id)arg0 ;
-(id)bisectAtIndex:(NSUInteger)arg0 ;
-(id)initWithArray:(id)arg0 context:(id)arg1 ;
-(id)initWithArray:(id)arg0 delegate:(id)arg1 shouldDelayArchiving:(BOOL)arg2 context:(id)arg3 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 shouldDelayArchiving:(BOOL)arg1 context:(id)arg2 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObject:(id)arg0 willModify:(BOOL)arg1 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)commonInit;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadFromLargeArraySegmentMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg0 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToLargeArraySegmentMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif