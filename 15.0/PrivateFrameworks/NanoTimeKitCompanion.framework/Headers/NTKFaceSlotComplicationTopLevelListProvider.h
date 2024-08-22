// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACESLOTCOMPLICATIONTOPLEVELLISTPROVIDER_H
#define NTKFACESLOTCOMPLICATIONTOPLEVELLISTPROVIDER_H

@class NSArray, NSDictionary, NSString, NSHashTable, NSDiffableDataSourceSnapshot;
@protocol NTKComplicationPickerListProvider, NTKComplicationItem;

#import <Foundation/Foundation.h>

#import "NTKComplication.h"

@interface NTKFaceSlotComplicationTopLevelListProvider : NSObject <NTKComplicationPickerListProvider>



@property (copy, nonatomic) NSArray *complications; // ivar: _complications
@property (copy, nonatomic) NSDictionary *complicationsBySectionIdentifier; // ivar: _complicationsBySectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *listProviderListeners; // ivar: _listProviderListeners
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot; // ivar: _pickerListDataSourceSnapshot
@property (readonly, nonatomic) BOOL pickerListProviderSlotIsRich; // ivar: _pickerListProviderSlotIsRich
@property (retain, nonatomic) NSObject<NTKComplicationItem> *pickerSelectedItem; // ivar: _pickerSelectedItem
@property (retain, nonatomic) NTKComplication *selectedItemIgnoringMoreButton; // ivar: _selectedItemIgnoringMoreButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger topLevelLimit; // ivar: _topLevelLimit


-(id)detailListProviderForSectionIdentifier:(id)arg0 ;
-(id)initWithRichSlot:(BOOL)arg0 complications:(id)arg1 selectedComplication:(id)arg2 ;
-(void)_buildDataIfNeeded;
-(void)addListProviderListener:(id)arg0 ;
-(void)removeListProviderListener:(id)arg0 ;


@end


#endif