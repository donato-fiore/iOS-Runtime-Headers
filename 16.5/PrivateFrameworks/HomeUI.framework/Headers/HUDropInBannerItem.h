// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDROPINBANNERITEM_H
#define HUDROPINBANNERITEM_H

@class DIDevice, HMAudioAnalysisEventBulletin;


#import "HUBannerItem.h"

@interface HUDropInBannerItem : HUBannerItem

@property (readonly, nonatomic) DIDevice *device; // ivar: _device
@property (retain, nonatomic) HMAudioAnalysisEventBulletin *eventBulletin; // ivar: _eventBulletin


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 device:(id)arg1 eventBulletin:(id)arg2 ;


@end


#endif