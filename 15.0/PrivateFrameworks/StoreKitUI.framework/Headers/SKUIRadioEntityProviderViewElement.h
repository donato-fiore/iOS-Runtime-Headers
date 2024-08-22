// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIRADIOENTITYPROVIDERVIEWELEMENT_H
#define SKUIRADIOENTITYPROVIDERVIEWELEMENT_H

@class RadioModel, NSArray, NSMapTable, NSString;
@protocol SKUIEntityProviding;


#import "SKUIAbstractEntityProviderViewElement.h"

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding>

 {
    BOOL _hasValidStations;
    NSInteger _countLimit;
    NSInteger _radioEntityProviderType;
    RadioModel *_radioModel;
    NSArray *_stations;
    NSMapTable *_stationToStationEntityValueProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfEntitiesInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfIndexBarEntries;
-(NSUInteger)numberOfSections;
-(NSUInteger)sectionForSectionIndexBarEntryAtIndex:(NSUInteger)arg0 ;
-(id)_entityValueProviderForStation:(id)arg0 ;
-(id)_stations;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)entityValueProviderAtIndexPath:(id)arg0 ;
-(id)indexBarEntryEntityValueProviderAtIndex:(NSUInteger)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)sectionEntityValueProviderAtIndex:(NSInteger)arg0 ;
-(void)_invalidateWithContext:(id)arg0 ;
-(void)_radioModelDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif