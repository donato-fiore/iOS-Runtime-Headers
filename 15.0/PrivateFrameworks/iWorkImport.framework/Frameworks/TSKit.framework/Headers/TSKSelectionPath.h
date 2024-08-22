// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKSELECTIONPATH_H
#define TSKSELECTIONPATH_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TSKSelectionPath : NSObject {
    NSArray *_currentSelection;
}


@property (readonly, nonatomic) NSString *UUIDDescription;
@property (readonly, nonatomic) NSArray *orderedSelections;


+(id)selectionPathWithSelectionArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexForSelection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithSelectionArray:(id)arg0 ;
-(id)leastSpecificSelectionOfClass:(Class)arg0 ;
-(id)mostSpecificSelectionConformingToProtocol:(id)arg0 ;
-(id)mostSpecificSelectionOfClass:(Class)arg0 ;
-(id)selectionAtIndex:(NSUInteger)arg0 ;
-(id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg0 ;
-(id)selectionPathPoppingOffSelection:(id)arg0 ;
-(id)selectionPathPoppingToSelection:(id)arg0 ;
-(id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg0 withSelection:(id)arg1 ;
-(id)selectionPathWithAppendedSelection:(id)arg0 ;
-(id)selectionPathWithAppendedSelections:(id)arg0 ;
-(void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(id)arg0 ;
-(void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;


@end


#endif