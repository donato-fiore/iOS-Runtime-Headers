// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIASERVICEITEM_H
#define HUMEDIASERVICEITEM_H

@class HFItem, HMHome, MediaService;
@protocol NSCopying;



@interface HUMediaServiceItem : HFItem <NSCopying>



@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) MediaService *mediaService; // ivar: _mediaService


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMediaService:(id)arg0 home:(id)arg1 ;


@end


#endif