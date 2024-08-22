// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGADGETDATASOURCE_H
#define PXGADGETDATASOURCE_H

@class NSArray;


#import "PXSectionedDataSource.h"

@interface PXGadgetDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSArray *gadgetSections; // ivar: _gadgetSections
@property (readonly, nonatomic) BOOL hasNoContentGadget;


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_gadgetsMatchingPredicate:(id)arg0 ;
-(id)gadgetAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)gadgetSectionAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)gadgetSectionWithIdentifier:(id)arg0 ;
-(id)gadgetWithId:(id)arg0 ;
-(id)gadgetsOfClass:(Class)arg0 ;
-(id)gadgetsOfType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithGadgetSections:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForGadget:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForGadgetSectionWithIdentifier:(id)arg0 ;
-(void)_enumerateGadgetSectionsUsingBlock:(id)arg0 ;
-(void)_enumerateGadgetsInSection:(id)arg0 atSectionIndex:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateGadgetSectionsUsingBlock:(id)arg0 ;
-(void)enumerateGadgetsUsingBlock:(id)arg0 ;


@end


#endif