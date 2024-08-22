// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHSCENEENVIRONMENTOBSERVERTOKEN_H
#define BLSHSCENEENVIRONMENTOBSERVERTOKEN_H

@protocol NSCopying, BLSHSceneEnvironmentObserving, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface BLSHSceneEnvironmentObserverToken : NSObject <NSCopying>

 {
    id<BLSHSceneEnvironmentObserving> *_observer;
    id<NSObject><NSCopying> *_sceneIdentityToken;
}




+(id)tokenWithObserver:(id)arg0 sceneIdentityToken:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithObserver:(id)arg0 sceneIdentityToken:(id)arg1 ;


@end


#endif