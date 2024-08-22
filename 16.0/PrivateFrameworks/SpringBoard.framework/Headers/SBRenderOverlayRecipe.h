// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRENDEROVERLAYRECIPE_H
#define SBRENDEROVERLAYRECIPE_H

@class UIWindowScene, NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>

#import "SBWindow.h"

@interface SBRenderOverlayRecipe : NSObject <SBTestRecipe>

 {
    SBWindow *_window;
    UIWindowScene *_windowScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)windowSceneDidUpdate:(id)arg0 ;


@end


#endif