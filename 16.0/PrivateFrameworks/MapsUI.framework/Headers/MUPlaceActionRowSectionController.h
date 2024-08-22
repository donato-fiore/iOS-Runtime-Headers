// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEACTIONROWSECTIONCONTROLLER_H
#define MUPLACEACTIONROWSECTIONCONTROLLER_H

@class NSString;
@protocol MUPlaceCardActionsRowViewMenuProvider, MKPlaceActionManagerProtocol, MUPlaceActionRowMenuProvider;


#import "MUPlaceSectionController.h"
#import "MUPlaceCardActionsRowViewController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceholderGridCache.h"

@interface MUPlaceActionRowSectionController : MUPlaceSectionController <MUPlaceCardActionsRowViewMenuProvider>

 {
    id<MKPlaceActionManagerProtocol> *_actionManager;
    MUPlaceCardActionsRowViewController *_actionsRowViewController;
    MUPlaceSectionView *_sectionView;
    MUPlaceholderGridCache *_placeholderGridCache;
    id<MUPlaceActionRowMenuProvider> *_menuProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasContent;
-(BOOL)isImpressionable;
-(id)analyticsModule;
-(id)initWithMapItem:(id)arg0 actionManager:(id)arg1 menuProvider:(id)arg2 ;
-(id)menuElementForActionItem:(id)arg0 ;
-(id)menuForActionItem:(id)arg0 ;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_setupButtons;
-(void)updateForActionRowInfoChange;


@end


#endif