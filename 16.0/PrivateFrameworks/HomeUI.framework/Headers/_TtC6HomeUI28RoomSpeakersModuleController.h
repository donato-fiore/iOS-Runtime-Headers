// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI28ROOMSPEAKERSMODULECONTROLLER_H
#define _TTC6HOMEUI28ROOMSPEAKERSMODULECONTROLLER_H



#import "HUItemModuleController.h"

@interface _TtC6HomeUI28RoomSpeakersModuleController : HUItemModuleController {
    ? delegate;
    ? selectedSpeakerItems;
    ? initialAccessories;
}




-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif