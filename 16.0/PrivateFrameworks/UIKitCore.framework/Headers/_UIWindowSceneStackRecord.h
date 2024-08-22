// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWINDOWSCENESTACKRECORD_H
#define _UIWINDOWSCENESTACKRECORD_H

@class NSString;
@protocol BSDebugDescriptionProviding;

#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface _UIWindowSceneStackRecord : NSObject <BSDebugDescriptionProviding>

 {
    UIWindowScene *_windowScene;
    NSUInteger _evaluationStrategy;
    NSUInteger _lastPushedTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif