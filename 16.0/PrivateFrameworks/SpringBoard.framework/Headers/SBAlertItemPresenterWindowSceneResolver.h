// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALERTITEMPRESENTERWINDOWSCENERESOLVER_H
#define SBALERTITEMPRESENTERWINDOWSCENERESOLVER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "SBWindowSceneManager.h"

@interface SBAlertItemPresenterWindowSceneResolver : NSObject

@property (readonly, retain, nonatomic) NSMapTable *modalAlertPresenters; // ivar: _modalAlertPresenters
@property (readonly, retain, nonatomic) SBWindowSceneManager *windowSceneManager; // ivar: _windowSceneManager


-(id)initWithSharedModalAlertItemPresenter:(id)arg0 windowSceneManager:(id)arg1 ;
-(id)resolvedSharedModalAlertItemPresenterForAlertItem:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 withSharedModalAlertItemPresenter:(id)arg1 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif