// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGADGETSPECMANAGER_H
#define PXGADGETSPECMANAGER_H

@class NSString, NSMutableSet;
@protocol PXChangeObserver, PXMutableGadgetSpecManager;


#import "PXObservable.h"
#import "PXGadgetSpec.h"
#import "PXExtendedTraitCollection.h"

@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager>



@property (retain, nonatomic) PXGadgetSpec *currentGadgetSpec; // ivar: _currentGadgetSpec
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Class gadgetSpecClass; // ivar: _gadgetSpecClass
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger scrollAxis; // ivar: _scrollAxis
@property (readonly) Class superclass;
@property (retain, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection
@property (retain, nonatomic) NSMutableSet *updatedGadgets; // ivar: _updatedGadgets


-(id)initWithGadgetSpecClass:(Class)arg0 scrollAxis:(NSInteger)arg1 traitCollection:(id)arg2 ;
-(id)mutableChangeObject;
-(void)_extendedTraitCollection:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)updateGadgetDataSourceToSpecIfNeeded:(id)arg0 ;


@end


#endif