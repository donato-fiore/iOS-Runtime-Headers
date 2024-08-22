// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFZONEITEM_H
#define HFZONEITEM_H

@class NSString, HMHome, HMZone;
@protocol NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol, HFHomeKitObject;


#import "HFItem.h"

@interface HFZoneItem : HFItem <NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMZone *zone; // ivar: _zone


+(id)na_identity;
-(BOOL)hf_canDeleteItem;
-(BOOL)isEqual:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)hf_deleteItem;
-(id)init;
-(id)initWithHome:(id)arg0 zone:(id)arg1 ;


@end


#endif