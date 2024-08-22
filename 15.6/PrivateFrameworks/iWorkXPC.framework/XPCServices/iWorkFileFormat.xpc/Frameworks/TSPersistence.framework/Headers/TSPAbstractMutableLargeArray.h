// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPABSTRACTMUTABLELARGEARRAY_H
#define TSPABSTRACTMUTABLELARGEARRAY_H

@class NSMutableArray, NSArray, NSString;
@protocol NSFastEnumeration, TSPMutableLargeArraySegmentDelegate;


#import "TSPObject.h"

@interface TSPAbstractMutableLargeArray : TSPObject <NSFastEnumeration, TSPMutableLargeArraySegmentDelegate>

 {
    NSUInteger _mutations;
    NSUInteger _maxSegmentElementCount;
    NSUInteger _maxSegmentSize;
    NSMutableArray *_segments;
    vector<_NSRange, std::allocator<_NSRange>> _segmentRanges;
    NSInteger _bisectedSegmentIdentifier;
    NSUInteger _bisectedSegmentIndex;
    NSUInteger _mergingSegmentIndex;
    BOOL _shouldDelayArchiving;
    unsigned int _delayedArchivingPriority;
    BOOL _storeOutsideObjectArchive;
}


@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly) NSUInteger count;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (readonly, nonatomic) BOOL disableSegmentation;
@property (readonly, nonatomic) NSUInteger estimatedByteSize; // ivar: _estimatedByteSize
@property (readonly, nonatomic) BOOL hasDelayedArchivingPriority;
@property (readonly, nonatomic) BOOL hasMaxSegmentElementCount;
@property (readonly, nonatomic) BOOL hasMaxSegmentSize;
@property (nonatomic) NSUInteger maxSegmentElementCount;
@property (nonatomic) NSUInteger maxSegmentSize;
@property (readonly, nonatomic) NSMutableArray *mutableArrayWrapper;
@property (readonly, nonatomic) NSString *packageLocatorForSegments;
@property (readonly, nonatomic) NSUInteger segmentCount;
@property (nonatomic) BOOL shouldDelayArchiving;
@property (nonatomic) BOOL storeOutsideObjectArchive;


+(Class)arraySegmentClass;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)elementCount;
-(NSUInteger)segmentIndexForElementIndex:(NSUInteger)arg0 firstSegmentIndex:(NSUInteger)arg1 lastSegmentIndex:(NSUInteger)arg2 segmentIndexGuess:(NSUInteger)arg3 ;
-(NSUInteger)segmentIndexForElementIndex:(NSUInteger)arg0 segmentIndexGuess:(NSUInteger)arg1 ;
-(id)convertElementToSegmentElement:(id)arg0 ;
-(id)convertSegmentElementToElement:(id)arg0 ;
-(id)createArraySegment;
-(id)dequeue;
-(id)firstObject;
-(id)initDocumentObjectWithContext:(id)arg0 ;
-(id)initWithArray:(id)arg0 context:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 shouldDelayArchiving:(BOOL)arg1 delayedArchivingPriority:(unsigned int)arg2 storeOutsideObjectArchive:(BOOL)arg3 ;
-(id)initWithContext:(id)arg0 shouldDelayArchiving:(BOOL)arg1 storeOutsideObjectArchive:(BOOL)arg2 ;
-(id)lastObject;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)peek;
-(id)pop;
-(id)segmentAtIndex:(NSUInteger)arg0 ;
-(id)segmentRanges;
-(struct _NSRange )lastRange;
-(struct _NSRange )rangeOfSegmentIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)addRange:(struct _NSRange )arg0 ;
-(void)bisectSegmentIfNeeded:(NSUInteger)arg0 ;
-(void)commonInit;
-(void)enqueue:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertRange:(struct _NSRange )arg0 atSegmentIndex:(NSUInteger)arg1 ;
-(void)largeArraySegmentDidBisectAtIndex:(NSUInteger)arg0 segments:(id)arg1 ;
-(void)loadFromLargeArrayMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)mergeSegmentIfNeededAtIndex:(NSUInteger)arg0 ;
-(void)push:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeLastObject;
-(void)removeLastRange;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)removeRangeAtSegmentIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToLargeArrayMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setRange:(struct _NSRange )arg0 forSegmentIndex:(NSUInteger)arg1 ;
-(void)updateSegmentRangesAfterIndex:(NSUInteger)arg0 ;


@end


#endif