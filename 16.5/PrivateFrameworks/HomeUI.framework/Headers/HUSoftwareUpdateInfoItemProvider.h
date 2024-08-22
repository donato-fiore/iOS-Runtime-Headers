// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSOFTWAREUPDATEINFOITEMPROVIDER_H
#define HUSOFTWAREUPDATEINFOITEMPROVIDER_H

@class HFItemProvider, HMHome, NSMutableSet;



@interface HUSoftwareUpdateInfoItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *softwareUpdateItems; // ivar: _softwareUpdateItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif