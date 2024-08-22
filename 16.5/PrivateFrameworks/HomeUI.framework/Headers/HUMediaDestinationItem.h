// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIADESTINATIONITEM_H
#define HUMEDIADESTINATIONITEM_H

@class HFItem;
@protocol HMMediaDestination;


#import "HUHomeTheaterAudioItemModule.h"

@interface HUMediaDestinationItem : HFItem

@property (readonly) HUHomeTheaterAudioItemModule *homeTheaterAudioItemModule; // ivar: _homeTheaterAudioItemModule
@property (readonly) NSObject<HMMediaDestination> *thisDestination; // ivar: _thisDestination


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)iconForAudioDestination:(id)arg0 ;
-(id)init;
-(id)initWithDestination:(id)arg0 withModule:(id)arg1 ;


@end


#endif