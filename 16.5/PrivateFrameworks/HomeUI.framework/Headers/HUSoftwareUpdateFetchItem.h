// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSOFTWAREUPDATEFETCHITEM_H
#define HUSOFTWAREUPDATEFETCHITEM_H

@class HFItem, HMHome, NAFuture;



@interface HUSoftwareUpdateFetchItem : HFItem

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // ivar: _softwareUpdateFetchFuture


+(id)_dateFormatter;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHome:(id)arg0 softwareUpdateFetchFuture:(id)arg1 ;


@end


#endif