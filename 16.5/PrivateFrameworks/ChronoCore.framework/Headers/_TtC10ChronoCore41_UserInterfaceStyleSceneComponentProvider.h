// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10CHRONOCORE41_USERINTERFACESTYLESCENECOMPONENTPROVIDER_H
#define _TTC10CHRONOCORE41_USERINTERFACESTYLESCENECOMPONENTPROVIDER_H

@class UIScene, UITraitCollection;
@protocol _UIWindowSceneComponentProviding;

#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore41_UserInterfaceStyleSceneComponentProvider : NSObject <_UIWindowSceneComponentProviding>

 {
    ? _colorScheme;
    ? _environmentProvider;
    ? _environmentSubscriber;
}


@property (nonatomic, retain) UIScene *_scene; // ivar: _scene
@property (nonatomic, retain) UITraitCollection *_traitOverrides; // ivar: _traitOverrides


-(id)init;
-(id)initWithScene:(id)arg0 ;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_setScene:(id)arg0 ;


@end


#endif