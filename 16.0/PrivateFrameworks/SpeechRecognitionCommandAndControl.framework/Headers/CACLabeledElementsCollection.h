// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACLABELEDELEMENTSCOLLECTION_H
#define CACLABELEDELEMENTSCOLLECTION_H

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CACLabeledElementsCollection : NSObject <NSCopying>

 {
    NSMutableDictionary *_cachedElementsByTitle;
    NSMutableDictionary *_cachedElementsByTrait;
    NSMutableArray *_cachedElementsSorted;
    CGFloat _currentCollectionTransactionID;
}


@property BOOL areElementsNumbered; // ivar: _areElementsNumbered
@property (retain) NSArray *axElements; // ivar: _axElements
@property (readonly) CGFloat cachedCollectionTransactionID; // ivar: _cachedCollectionTransactionID
@property (readonly) CGFloat finishedTime; // ivar: _finishedTime


+(id)labeledElementsFromTextMarkerRanges:(id)arg0 axElement:(id)arg1 ;
-(BOOL)isCollecting;
-(BOOL)isEmpty;
-(NSUInteger)collectionCount;
-(id)_initWithCollection:(id)arg0 ;
-(id)_keyFromTrait:(NSUInteger)arg0 ;
-(id)collectedElements;
-(id)collectedElementsWithTitle:(id)arg0 ;
-(id)collectedElementsWithTrait:(NSUInteger)arg0 ;
-(id)copyListOfCollectedElementsSorted;
-(id)copyTableOfCollectedElementsByTitle;
-(id)copyTableOfCollectedElementsByTrait;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newlyCollectedElements;
-(void)addLabeledElementWithItemElement:(id)arg0 elementsByTitle:(id)arg1 elementsByTrait:(id)arg2 elementsSorted:(id)arg3 ;
-(void)cancelCollecting;
-(void)flushCollection;
-(void)resetCollectedFlagForAllElements;
-(void)updateWithAXElements:(id)arg0 ;


@end


#endif