// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEDETAILSROOMITEM_H
#define HUSERVICEDETAILSROOMITEM_H

@class HFItemBuilder<HFServiceLikeBuilder>;


#import "HUServiceDetailsAbstractItem.h"

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem

@property (readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // ivar: _serviceLikeBuilder


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithSourceServiceItem:(id)arg0 home:(id)arg1 serviceLikeBuilder:(id)arg2 ;


@end


#endif