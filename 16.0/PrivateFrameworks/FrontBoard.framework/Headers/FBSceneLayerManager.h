// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSCENELAYERMANAGER_H
#define FBSCENELAYERMANAGER_H

@class NSOrderedSet, NSHashTable, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBScene.h"

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding>

 {
    NSOrderedSet *_fbsLayers;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSOrderedSet *layers; // ivar: _layers
@property (readonly, weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(id)_initWithScene:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)layerWithContextID:(unsigned int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_observer_didStartTrackingLayers;
-(void)_observer_didStopTrackingLayers;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif