// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACECARDACTIONSROWVIEW_H
#define MUPLACECARDACTIONSROWVIEW_H

@class NSArray, NSString;
@protocol MUPlaceCardActionsRowViewDelegate, MKPlaceActionManagerProtocol, MUPlaceCardActionsRowViewMenuProvider;


#import "MUGroupedActionsRowView.h"

@interface MUPlaceCardActionsRowView : MUGroupedActionsRowView <MUPlaceCardActionsRowViewDelegate>

 {
    NSUInteger _style;
    NSArray *_viewModels;
}


@property (weak, nonatomic) NSObject<MKPlaceActionManagerProtocol> *actionManager; // ivar: _actionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlaceCardActionsRowViewMenuProvider> *menuProvider; // ivar: _menuProvider
@property (readonly) Class superclass;


-(id)_buildModuleForAnalytics;
-(id)initWithConfiguration:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(int)_buttonItemTypeFromActionItem:(id)arg0 ;
-(void)_createActionsFromActionManager;
-(void)actionsRowView:(id)arg0 didSelectViewModel:(id)arg1 presentationOptions:(id)arg2 ;
-(void)reload;


@end


#endif