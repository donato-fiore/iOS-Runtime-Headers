// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSELECTABLEACTIONSETITEMMODULE_H
#define HUSELECTABLEACTIONSETITEMMODULE_H

@class NSString;


#import "HUActionSetItemModule.h"

@interface HUSelectableActionSetItemModule : HUActionSetItemModule {
    ? selectionController;
    ? sceneSectionHeaderTitle;
}


@property (nonatomic, copy) NSString *sceneSectionHeaderTitle;


-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithHome:(id)arg0 itemUpdater:(id)arg1 ;


@end


#endif