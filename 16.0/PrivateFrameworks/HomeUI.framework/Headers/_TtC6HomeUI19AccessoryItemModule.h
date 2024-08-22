// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI19ACCESSORYITEMMODULE_H
#define _TTC6HOMEUI19ACCESSORYITEMMODULE_H

@class HFItemModule;



@interface _TtC6HomeUI19AccessoryItemModule : HFItemModule {
    ? home;
    ? itemProviderBlock;
    ? sectionGroupingType;
}




-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;


@end


#endif