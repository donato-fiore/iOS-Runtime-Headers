// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSOFTWAREUPDATEINFOITEM_H
#define HUSOFTWAREUPDATEINFOITEM_H

@class HFItem, NSSet;



@interface HUSoftwareUpdateInfoItem : HFItem

@property (readonly, nonatomic) NSSet *accessories; // ivar: _accessories


+(id)_dateFormatter;
+(id)_iconDescriptorForAccessories:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithAccessories:(id)arg0 ;


@end


#endif