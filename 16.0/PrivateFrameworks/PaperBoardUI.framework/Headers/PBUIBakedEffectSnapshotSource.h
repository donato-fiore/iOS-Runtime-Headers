// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIBAKEDEFFECTSNAPSHOTSOURCE_H
#define PBUIBAKEDEFFECTSNAPSHOTSOURCE_H

@class NSString, _UILegibilitySettings, UIImage;
@protocol PBUIReplicaSnapshotSource, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "PBUIWallpaperEffectConfiguration.h"

@interface PBUIBakedEffectSnapshotSource : NSObject <PBUIReplicaSnapshotSource, NSCopying, BSDescriptionProviding>



@property (copy, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PBUIWallpaperEffectConfiguration *effectConfiguration; // ivar: _effectConfiguration
@property (readonly, nonatomic) BOOL effectsAreBakedIn;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIImage *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSnapshotSource:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif