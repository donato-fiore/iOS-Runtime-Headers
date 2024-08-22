// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACEACTIONROWSECTIONCONTROLLER_H
#define MUPLACEACTIONROWSECTIONCONTROLLER_H

@class MKPlaceCardActionsRowViewController, NSString;
@protocol _MKPlaceViewControllerDelegate, MKPlaceActionManagerProtocol, MUPlaceActionRowMenuProvider;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"

@interface MUPlaceActionRowSectionController : MUPlaceSectionController <_MKPlaceViewControllerDelegate>

 {
    id<MKPlaceActionManagerProtocol> *_actionManager;
    MKPlaceCardActionsRowViewController *_actionsRowViewController;
    MUPlaceSectionView *_sectionView;
    id<MUPlaceActionRowMenuProvider> *_menuProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasContent;
-(id)analyticsModule;
-(id)initWithMapItem:(id)arg0 actionManager:(id)arg1 menuProvider:(id)arg2 ;
-(id)menuElementForActionItem:(id)arg0 ;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_setupButtons;
-(void)updateForActionRowInfoChange;


@end


#endif