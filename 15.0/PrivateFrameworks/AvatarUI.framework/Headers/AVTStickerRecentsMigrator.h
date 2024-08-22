// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERRECENTSMIGRATOR_H
#define AVTSTICKERRECENTSMIGRATOR_H

@class AVTUILogger;
@protocol AVTAvatarStoreInternal;

#import <Foundation/Foundation.h>

#import "AVTStickerConfigurationProvider.h"

@interface AVTStickerRecentsMigrator : NSObject

@property (nonatomic) AVTUILogger *logger; // ivar: _logger
@property (nonatomic) BOOL migrationHasBeenPerformed; // ivar: _migrationHasBeenPerformed
@property (retain, nonatomic) AVTStickerConfigurationProvider *stickerConfigurationProvider; // ivar: _stickerConfigurationProvider
@property (retain, nonatomic) NSObject<AVTAvatarStoreInternal> *store; // ivar: _store


-(id)initWithStore:(id)arg0 stickerConfigurationProvider:(id)arg1 environment:(id)arg2 ;
-(void)performMigrationIfNeeded;
-(void)setNeedsMigrationOnNextLaunch;


@end


#endif