// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDATASECTIONMANAGER_H
#define PXDATASECTIONMANAGER_H

@class NSArray, NSString;
@protocol PXDataSectionManagerChangeObserver, NSObject><NSCopying;


#import "PXObservable.h"
#import "PXDataSection.h"
#import "PXArrayChangeDetails.h"

@interface PXDataSectionManager : PXObservable <PXDataSectionManagerChangeObserver>

 {
    PXDataSection *_dataSection;
}


@property (readonly, nonatomic) BOOL allowsEmptyDataSection;
@property (readonly, nonatomic) PXArrayChangeDetails *changeDetailsFromPreviousDataSection; // ivar: _changeDetailsFromPreviousDataSection
@property (readonly, nonatomic) NSUInteger childChangeDescriptorsInvalidatingDataSection;
@property (copy, nonatomic) NSArray *childDataSectionManagers; // ivar: _childDataSectionManagers
@property (readonly, nonatomic) PXDataSection *dataSection;
@property (readonly, nonatomic, getter=isDataSectionEmpty) BOOL dataSectionEmpty;
@property (readonly, nonatomic) PXDataSection *dataSectionIfCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NSObject><NSCopying> *outlineObject; // ivar: _outlineObject
@property (readonly, nonatomic) PXDataSection *previousDataSection; // ivar: _previousDataSection
@property (readonly, nonatomic) NSInteger previousDataSectionIdentifier; // ivar: _previousDataSectionIdentifier
@property (readonly) Class superclass;


-(id)auxiliaryObjectForKey:(id)arg0 dataSectionObject:(id)arg1 hintIndex:(NSInteger)arg2 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg0 childChangeDetails:(id)arg1 ;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg0 ;
-(id)createDataSection;
-(id)init;
-(id)initWithChildDataSectionManagers:(id)arg0 ;
-(void)_registerAsChangeObserverForDataSectionManagers:(id)arg0 ;
-(void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg0 ;
-(void)childDataSectionManager:(id)arg0 didChangeDataSectionWithChangeDetails:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setChangeProcessingPaused:(BOOL)arg0 forReason:(id)arg1 ;
-(void)updateDataSectionWithChangeDetails:(id)arg0 ;


@end


#endif