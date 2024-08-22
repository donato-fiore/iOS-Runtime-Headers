// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACESLOTCOMPLICATIONDETAILLISTPROVIDER_H
#define NTKFACESLOTCOMPLICATIONDETAILLISTPROVIDER_H

@class NSArray, NSString, NSHashTable, NSDiffableDataSourceSnapshot;
@protocol NTKComplicationPickerListProvider, NTKComplicationItem;

#import <Foundation/Foundation.h>


@interface NTKFaceSlotComplicationDetailListProvider : NSObject <NTKComplicationPickerListProvider>



@property (copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *listProviderListeners; // ivar: _listProviderListeners
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot; // ivar: _pickerListDataSourceSnapshot
@property (readonly, nonatomic) BOOL pickerListProviderSlotIsRich; // ivar: _pickerListProviderSlotIsRich
@property (readonly, nonatomic) NSObject<NTKComplicationItem> *pickerSelectedItem; // ivar: _pickerSelectedItem
@property (readonly) Class superclass;


-(id)initWithRichSlot:(BOOL)arg0 complications:(id)arg1 selectedComplication:(id)arg2 ;
-(void)_buildDataIfNeeded;
-(void)addListProviderListener:(id)arg0 ;
-(void)removeListProviderListener:(id)arg0 ;


@end


#endif