// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNOUTLINESELECTION_H
#define KNOUTLINESELECTION_H

@class NSDictionary;


#import "KNSlideCollectionSelection.h"

@interface KNOutlineSelection : KNSlideCollectionSelection

@property (readonly, nonatomic) _NSRange rangeInSelectedParagraph; // ivar: _rangeInSelectedParagraph
@property (readonly, nonatomic) NSDictionary *selectedParagraphIndexesForSlideNodes; // ivar: _selectedParagraphIndexesForSlideNodes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contiguousIndexesForSelectedParagraphIndexesForSlideNodes:(id)arg0 ;
-(id)description;
-(id)estimatedTextSelection;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithSlideNodes:(id)arg0 slideNodeToEdit:(id)arg1 ;
-(id)initWithSlideNodes:(id)arg0 slideNodeToEdit:(id)arg1 selectedParagraphIndexesForSlideNodes:(id)arg2 rangeInSelectedParagraph:(struct _NSRange )arg3 ;
-(struct _NSRange )absoluteRangeInStorage:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif