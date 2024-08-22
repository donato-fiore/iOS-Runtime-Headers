// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERCONFIGURATIONPROVIDER_H
#define AVTSTICKERCONFIGURATIONPROVIDER_H

@class NSCache, NSArray, NSArray<AVTStickerPack>;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTStickerConfigurationProvider : NSObject

@property (retain, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSCache *stickerConfigurationCache; // ivar: _stickerConfigurationCache
@property (retain, nonatomic) NSArray *stickerConfigurationNames; // ivar: _stickerConfigurationNames
@property (retain, nonatomic) NSArray<AVTStickerPack> *stickerPacks; // ivar: _stickerPacks


-(id)availableStickerNamesForAvatarRecord:(id)arg0 ;
-(id)filteredStickerConfigurations:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 forStickerPacks:(id)arg1 stickerConfigurationNames:(id)arg2 ;
-(id)stickerConfigurationForAvatarRecord:(id)arg0 stickerName:(id)arg1 ;
-(id)stickerConfigurationsForAvatarRecord:(id)arg0 ;


@end


#endif