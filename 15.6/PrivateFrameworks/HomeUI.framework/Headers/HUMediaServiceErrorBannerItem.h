// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASERVICEERRORBANNERITEM_H
#define HUMEDIASERVICEERRORBANNERITEM_H

@class HFItem, HMHome;
@protocol NSCopying;



@interface HUMediaServiceErrorBannerItem : HFItem <NSCopying>



@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;


@end


#endif