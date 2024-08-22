// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSOFTWAREUPDATESETTINGSITEM_H
#define HUSOFTWAREUPDATESETTINGSITEM_H

@class HFItem, HMHome;



@interface HUSoftwareUpdateSettingsItem : HFItem

@property (retain, nonatomic) HMHome *home; // ivar: _home


+(id)footerTitleForHome:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif