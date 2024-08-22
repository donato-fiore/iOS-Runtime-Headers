// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEATURESPECMANAGER_H
#define PXFEATURESPECMANAGER_H

@class NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXExtendedTraitCollection.h"
#import "PXFeatureSpec.h"

@interface PXFeatureSpecManager : PXObservable <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger defaultChangesToUpdateFor;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PXFeatureSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg0 change:(NSUInteger)arg1 ;
-(id)createSpec;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)mutableChangeObject;
-(void)_updateSpec;
-(void)invalidateSpec;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif