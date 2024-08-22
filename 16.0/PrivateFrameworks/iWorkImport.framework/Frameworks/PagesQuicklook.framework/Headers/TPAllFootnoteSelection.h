// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPALLFOOTNOTESELECTION_H
#define TPALLFOOTNOTESELECTION_H

@class TSKSelection;



@interface TPAllFootnoteSelection : TSKSelection



+(Class)archivedSelectionClass;
-(BOOL)canBeGroupedForActivityStreamWithFullPath:(id)arg0 index:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)aggregate:(id)arg0 fullPath:(id)arg1 selectionModelTranslatorProvider:(id)arg2 ;
-(id)initWithArchive:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif