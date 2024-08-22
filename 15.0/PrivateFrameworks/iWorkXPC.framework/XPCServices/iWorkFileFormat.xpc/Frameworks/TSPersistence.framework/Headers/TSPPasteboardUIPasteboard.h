// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPPASTEBOARDUIPASTEBOARD_H
#define TSPPASTEBOARDUIPASTEBOARD_H

@class NSArray, NSMutableDictionary;


#import "TSPPasteboard.h"

@interface TSPPasteboardUIPasteboard : TSPPasteboard {
    NSArray *_cachedPasteboardTypes;
    NSMutableDictionary *_pasteboardItemIndexCache;
    NSUInteger _pasteboardItemCount;
    NSInteger _cachedChangeCount;
}




-(BOOL)canLoadItemsOfClass:(Class)arg0 ;
-(NSInteger)clearContents;
-(NSInteger)numberOfItems;
-(NSUInteger)pasteboardItemMaxSize;
-(id)URLs;
-(id)dataForPasteboardType:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)initWithGeneralPasteboard;
-(id)initWithNativePasteboard:(id)arg0 ;
-(id)initWithPasteboardName:(id)arg0 create:(BOOL)arg1 ;
-(id)initWithUniquePasteboardName;
-(id)pasteboardTypes;
-(id)pasteboardTypesForItemSet:(id)arg0 ;
-(id)propertyListForValue:(id)arg0 ;
-(id)richTextStrings;
-(id)string;
-(id)stringForPasteboardType:(id)arg0 ;
-(id)strings;
-(id)stringsForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg0 ;
-(id)valuesForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(void)addData:(id)arg0 forPasteboardType:(id)arg1 ;
-(void)addItems:(id)arg0 isSmartCopy:(BOOL)arg1 ;
-(void)addPasteboardItem:(id)arg0 ;
-(void)addPasteboardItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addPasteboardItemForObject:(id)arg0 type:(id)arg1 ;
-(void)addPasteboardItemIndex:(NSUInteger)arg0 forType:(id)arg1 ;
-(void)invalidate;
-(void)invalidatePasteboardCache;
-(void)invalidatePasteboardCacheIfNeeded;
-(void)reloadPasteboardItemIndexCacheIfNeeded;
-(void)setString:(id)arg0 ;
-(void)updateCachedChangeCount;


@end


#endif