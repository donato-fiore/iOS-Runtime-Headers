// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6HOMEUI20ACTIONGRIDITEMMODULE_H
#define _TTC6HOMEUI20ACTIONGRIDITEMMODULE_H

@class TtC6HomeUI19AccessoryItemModule;
@protocol HFActionSetValueSourceDelegate;



@interface _TtC6HomeUI20ActionGridItemModule : TtC6HomeUI19AccessoryItemModule <HFActionSetValueSourceDelegate>

 {
    ? config;
    ? actionBuilderContainer;
    ? delegate;
}




-(id)buildItemProviders;
-(void)actionSetValueSource:(id)arg0 didUpdateValuesForActionBuilders:(id)arg1 ;


@end


#endif