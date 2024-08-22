// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESAMPLERNODEDEFINITION_H
#define PHASESAMPLERNODEDEFINITION_H

@class NSString;


#import "PHASEGeneratorNodeDefinition.h"

@interface PHASESamplerNodeDefinition : PHASEGeneratorNodeDefinition

@property (readonly, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, nonatomic) NSString *assetUID; // ivar: _assetUID
@property (nonatomic) NSInteger cullOption; // ivar: _cullOption
@property (nonatomic) NSInteger playbackMode; // ivar: _playbackMode
@property (nonatomic) NSInteger playbackType;


+(id)new;
-(id)init;
-(id)initWithSoundAssetIdentifier:(id)arg0 mixerDefinition:(id)arg1 ;
-(id)initWithSoundAssetIdentifier:(id)arg0 mixerDefinition:(id)arg1 identifier:(id)arg2 ;
-(id)initWithSoundAssetUID:(id)arg0 mixerDefinition:(id)arg1 ;
-(id)initWithSoundAssetUID:(id)arg0 mixerDefinition:(id)arg1 uid:(id)arg2 ;


@end


#endif