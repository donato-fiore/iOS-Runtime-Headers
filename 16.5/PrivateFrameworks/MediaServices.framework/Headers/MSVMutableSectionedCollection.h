// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVMUTABLESECTIONEDCOLLECTION_H
#define MSVMUTABLESECTIONEDCOLLECTION_H



#import "MSVSectionedCollection.h"

@interface MSVMutableSectionedCollection : MSVSectionedCollection



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_initializeAsEmptySectionedCollection;
-(void)appendItem:(id)arg0 ;
-(void)appendItems:(id)arg0 ;
-(void)appendSection:(id)arg0 ;
-(void)insertItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)insertSection:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)moveItemFromIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)moveSectionFromIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeItemAtIndexPath:(id)arg0 ;
-(void)removeSectionAtIndex:(NSInteger)arg0 ;
-(void)replaceItemsUsingBlock:(id)arg0 ;
-(void)replaceObjectAtIndexPath:(id)arg0 withObject:(id)arg1 ;
-(void)replaceSectionAtIndex:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)replaceSectionsUsingBlock:(id)arg0 ;


@end


#endif