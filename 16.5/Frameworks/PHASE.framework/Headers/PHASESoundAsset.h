// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESOUNDASSET_H
#define PHASESOUNDASSET_H

@class NSData, NSURL;


#import "PHASEAsset.h"

@interface PHASESoundAsset : PHASEAsset {
    unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> _soundAssetInfo;
}


@property (readonly) NSData *data; // ivar: _data
@property (readonly) NSInteger normalizationMode; // ivar: _normalizationMode
@property (readonly) NSInteger type; // ivar: _type
@property (readonly) NSURL *url; // ivar: _url


+(id)new;
-(id)init;
-(id)initWithData:(id)arg0 uid:(id)arg1 normalizationMode:(NSInteger)arg2 soundAssetInfo:(struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> )arg3 assetRegistry:(id)arg4 ;
-(id)initWithUID:(id)arg0 assetRegistry:(id)arg1 ;
-(struct SoundAssetInfo *)getAssetInfo;


@end


#endif