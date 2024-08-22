// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSHORTCUTITEM_H
#define HUSHORTCUTITEM_H

@class HFItem, HFTriggerBuilder;
@protocol NSCopying;



@interface HUShortcutItem : HFItem <NSCopying>



@property (readonly, nonatomic) BOOL selectable; // ivar: _selectable
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTriggerBuilder:(id)arg0 selectable:(BOOL)arg1 ;


@end


#endif