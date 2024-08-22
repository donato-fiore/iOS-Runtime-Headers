// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYWINDOWSCENESTACK_H
#define _UIKEYWINDOWSCENESTACK_H

@class NSMapTable, NSMutableOrderedSet, NSString;
@protocol BSDebugDescriptionProviding;

#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface _UIKeyWindowSceneStack : NSObject <BSDebugDescriptionProviding>

 {
    NSMapTable *_recordsByWindowScene;
    NSMutableOrderedSet *_orderedRecords;
    UIWindowScene *_keyWindowSceneInStack;
    ? _sceneStackFlags;
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif