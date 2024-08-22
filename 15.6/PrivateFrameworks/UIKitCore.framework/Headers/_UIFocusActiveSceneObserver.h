// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSACTIVESCENEOBSERVER_H
#define _UIFOCUSACTIVESCENEOBSERVER_H

@class UIFocusStateObserver;


#import "UIScene.h"

@interface _UIFocusActiveSceneObserver : UIFocusStateObserver {
    UIScene *_scene;
}




-(id)_initWithScene:(id)arg0 ;
-(id)init;
-(id)initWithScene:(id)arg0 ;
-(void)beginMonitoringContextChangesForWindow:(id)arg0 ;
-(void)stopMonitoringContextChangesForWindow:(id)arg0 ;


@end


#endif