// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLEXPANDEDPLATTERINTERACTIONMANAGER_H
#define PLEXPANDEDPLATTERINTERACTIONMANAGER_H

@class UIContextMenuInteraction, NSString, UIViewController<PLExpandedPlatterInteractionHosting>;
@protocol UIContextMenuInteractionDelegate_Private, PLExpandedPlatterInteractionManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLExpandedPlatterInteractionManager : NSObject <UIContextMenuInteractionDelegate_Private>

 {
    UIContextMenuInteraction *_contextMenuInteraction;
    id *_cachedCompletion;
    ? _expandedPlatterInteractionManagerDelegateFlags;
    BOOL _initialPanOccurred;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PLExpandedPlatterInteractionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController<PLExpandedPlatterInteractionHosting> *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic, getter=reachedForceThreshold) BOOL reachedForceThreshold;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_contextMenuInteractionShouldAllowSwipeToDismiss:(id)arg0 ;
-(NSUInteger)_activationMethodForContextMenuInteraction:(id)arg0 ;
-(id)_contextMenuConfigurationIdentifier;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_identifier;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithPresentingViewController:(id)arg0 delegate:(id)arg1 ;
-(void)_contextMenuInteraction:(id)arg0 shouldPresentWithCompletion:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dismiss;
-(void)presentAtLocation:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)updateVisibleMenuWithBlock:(id)arg0 ;


@end


#endif