// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEPLACEHOLDERITEMMODULE_H
#define HUSERVICEPLACEHOLDERITEMMODULE_H

@class HFItemModule, NSString, HFStaticItemProvider;
@protocol HFItemHiding;


#import "HUDashboardContext.h"

@interface HUServicePlaceholderItemModule : HFItemModule <HFItemHiding>



@property (retain, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFStaticItemProvider *placeholderItemProvider; // ivar: _placeholderItemProvider
@property (readonly) Class superclass;


-(id)_itemsToHideInSet:(id)arg0 ;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithContext:(id)arg0 itemUpdater:(id)arg1 ;


@end


#endif