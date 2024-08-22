// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFACERECOGNITIONPERSONEDITORITEMMANAGER_H
#define HUFACERECOGNITIONPERSONEDITORITEMMANAGER_H

@class HFItemManager, HFItem, HFStaticItem, HMHome, HFItem<HFPersonLikeItem>, HFStaticItemProvider, HFUserNameFormatter;



@interface HUFaceRecognitionPersonEditorItemManager : HFItemManager

@property (retain, nonatomic) HFItem *addNameItem; // ivar: _addNameItem
@property (retain, nonatomic) HFItem *deleteItem; // ivar: _deleteItem
@property (retain, nonatomic) HFItem *faceCropItem; // ivar: _faceCropItem
@property (retain, nonatomic) HFStaticItem *hideNotificationsItem; // ivar: _hideNotificationsItem
@property (retain, nonatomic) HFItem *nameItem; // ivar: _nameItem
@property (retain, nonatomic) HMHome *personHome; // ivar: _personHome
@property (readonly, nonatomic) HFItem<HFPersonLikeItem> *personItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (retain, nonatomic) HFUserNameFormatter *userNameFormatter; // ivar: _userNameFormatter


+(id)dateFormatter;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif