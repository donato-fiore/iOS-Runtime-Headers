// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFZONEBUILDERITEM_H
#define HFZONEBUILDERITEM_H



#import "HFItem.h"
#import "HFZoneBuilder.h"

@interface HFZoneBuilderItem : HFItem

@property (readonly, nonatomic) HFZoneBuilder *zoneBuilder; // ivar: _zoneBuilder


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithZoneBuilder:(id)arg0 ;


@end


#endif