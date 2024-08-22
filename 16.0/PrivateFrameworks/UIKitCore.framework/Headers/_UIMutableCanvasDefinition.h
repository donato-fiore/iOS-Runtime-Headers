// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMUTABLECANVASDEFINITION_H
#define _UIMUTABLECANVASDEFINITION_H

@class UICanvasDefinition;


#import "UISceneSession.h"

@interface _UIMutableCanvasDefinition : UICanvasDefinition {
    UISceneSession *_sceneSession;
}


@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;


-(NSInteger)systemType;
-(id)configuration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRepresentation:(id)arg0 ;
-(id)persistentIdentifier;
-(id)representedCanvas;
-(id)role;
-(id)scene;
-(id)stateRestorationActivity;
-(id)userInfo;
-(void)setUserInfo:(id)arg0 ;


@end


#endif