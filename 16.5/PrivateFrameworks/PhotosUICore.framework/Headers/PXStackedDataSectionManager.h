// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTACKEDDATASECTIONMANAGER_H
#define PXSTACKEDDATASECTIONMANAGER_H

@class NSString;
@protocol PXDataSectionManagerEnabling;


#import "PXDataSectionManager.h"
#import "PXDataSectionEnablementForwarder.h"

@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling>



@property (nonatomic) BOOL alwaysContainsObjects; // ivar: _alwaysContainsObjects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // ivar: _enablementForwarder
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateDataSectionIfNecessary;
-(BOOL)isDataSectionEmpty;
-(id)auxiliaryObjectForKey:(id)arg0 dataSectionObject:(id)arg1 hintIndex:(NSInteger)arg2 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg0 childChangeDetails:(id)arg1 ;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg0 ;
-(id)childDataSectionManagerForObjectAtIndex:(NSInteger)arg0 localIndex:(*NSInteger)arg1 ;
-(id)createDataSection;
-(id)initWithChildDataSectionManagers:(id)arg0 ;


@end


#endif