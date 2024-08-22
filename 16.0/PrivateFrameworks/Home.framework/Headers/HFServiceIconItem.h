// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICEICONITEM_H
#define HFSERVICEICONITEM_H

@protocol HFIconDescriptor;


#import "HFItem.h"

@interface HFServiceIconItem : HFItem

@property (readonly, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithIconDescriptor:(id)arg0 ;


@end


#endif