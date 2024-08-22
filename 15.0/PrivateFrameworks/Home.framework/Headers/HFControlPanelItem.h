// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCONTROLPANELITEM_H
#define HFCONTROLPANELITEM_H

@class NSDictionary, NSSet, NSString;
@protocol NAIdentifiable;


#import "HFItem.h"

@interface HFControlPanelItem : HFItem <NAIdentifiable>



@property (readonly, nonatomic) NSDictionary *UUIDsByControlItemPointer; // ivar: _UUIDsByControlItemPointer
@property (readonly, copy, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (readonly, nonatomic) NSDictionary *controlItemsByUUID; // ivar: _controlItemsByUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *displayResults; // ivar: _displayResults
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)_controlPanelItemRules;
+(id)na_identity;
+(id)standardControlPanelItemsForControlItems:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)sortPriority;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)controlItemForIdentifier:(id)arg0 ;
-(id)identifierForControlItem:(id)arg0 ;
-(id)init;
-(id)initWithControlItems:(id)arg0 displayResults:(id)arg1 ;


@end


#endif