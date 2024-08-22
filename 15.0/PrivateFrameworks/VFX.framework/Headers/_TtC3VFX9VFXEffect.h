// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC3VFX9VFXEFFECT_H
#define _TTC3VFX9VFXEFFECT_H

@class NSArray;
@protocol _TtP3VFX17VFXEffectDelegate_;

#import <Foundation/Foundation.h>

#import "_TtC3VFX24VFXRemoteEditionEndpoint.h"
#import "_TtC3VFX8VFXScene.h"

@interface _TtC3VFX9VFXEffect : NSObject {
    ? effectID;
    ? name;
    ? url;
    ? onEffectRestartSubject;
    ? cancellables;
}


@property (nonatomic) BOOL allowRemoteEdition;
@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic, retain) NSObject<_TtP3VFX17VFXEffectDelegate_> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSInteger identifier;
@property (nonatomic, retain) _TtC3VFX24VFXRemoteEditionEndpoint *remoteEditionEndpoint; // ivar: remoteEditionEndpoint
@property (nonatomic, weak) _TtC3VFX8VFXScene *scene; // ivar: scene
@property (nonatomic) NSInteger version; // ivar: version


-(BOOL)isEnabled:(id)arg0 ;
-(id)bindingOf:(id)arg0 named:(id)arg1 ;
-(id)bindingWith:(NSInteger)arg0 named:(id)arg1 ;
-(id)firstBindingWithName:(id)arg0 ;
-(id)init;
-(id)parameterOf:(id)arg0 named:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setParameterOf:(id)arg0 named:(id)arg1 ;
-(void)withPointerToParameterOf:(id)arg0 named:(id)arg1 block:(id)arg2 ;


@end


#endif