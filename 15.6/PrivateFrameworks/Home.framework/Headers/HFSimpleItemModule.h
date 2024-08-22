// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSIMPLEITEMMODULE_H
#define HFSIMPLEITEMMODULE_H

@class NSSet;


#import "HFItemModule.h"

@interface HFSimpleItemModule : HFItemModule

@property (retain, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (copy, nonatomic) id *sectionBuilder; // ivar: _sectionBuilder


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 itemProviders:(id)arg1 sectionBuilder:(id)arg2 ;


@end


#endif