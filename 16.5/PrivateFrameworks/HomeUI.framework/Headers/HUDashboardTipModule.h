// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDTIPMODULE_H
#define HUDASHBOARDTIPMODULE_H

@class HFItemModule, HFStaticItemProvider, NSString, TPKContent, TPKContentController;
@protocol TPKContentControllerDelegate;



@interface HUDashboardTipModule : HFItemModule <TPKContentControllerDelegate>



@property (readonly, nonatomic) HFStaticItemProvider *dashboardTipItemProvider; // ivar: _dashboardTipItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) TPKContent *tipContent; // ivar: _tipContent
@property (readonly, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithContext:(id)arg0 itemUpdater:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)itemProviders;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif