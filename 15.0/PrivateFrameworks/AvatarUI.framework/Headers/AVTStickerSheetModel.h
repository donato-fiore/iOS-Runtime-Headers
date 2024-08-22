// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERSHEETMODEL_H
#define AVTSTICKERSHEETMODEL_H

@class NSArray;
@protocol AVTAvatarRecord, AVTTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTUIStickerPlaceholderProviderFactory.h"
#import "AVTUIStickerRenderer.h"

@interface AVTStickerSheetModel : NSObject

@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) AVTUIStickerPlaceholderProviderFactory *placeholderProviderFactory; // ivar: _placeholderProviderFactory
@property (readonly, copy, nonatomic) NSArray *stickerItems; // ivar: _stickerItems
@property (readonly, nonatomic) AVTUIStickerRenderer *stickerRenderer; // ivar: _stickerRenderer
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *taskScheduler; // ivar: _taskScheduler


+(id)sheetModelForAvatarRecord:(id)arg0 withConfigurations:(id)arg1 cache:(id)arg2 taskScheduler:(id)arg3 renderingQueue:(id)arg4 encodingQueue:(id)arg5 stickerGeneratorPool:(id)arg6 imageProvider:(id)arg7 environment:(id)arg8 ;
-(id)initWithAvatarRecord:(id)arg0 stickerItems:(id)arg1 stickerRenderer:(id)arg2 taskScheduler:(id)arg3 placeholderProviderFactory:(id)arg4 environment:(id)arg5 ;


@end


#endif