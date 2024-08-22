// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERRECENTSPRESETSPROVIDER_H
#define AVTSTICKERRECENTSPRESETSPROVIDER_H


#import <Foundation/Foundation.h>


@interface AVTStickerRecentsPresetsProvider : NSObject



+(id)filteredRecentStickers:(id)arg0 withAvailableRecordIdentifiersMap:(id)arg1 ;
+(id)paddedStickerRecordsWithRecents:(id)arg0 paddingMemojiIdentifier:(id)arg1 numberOfStickers:(NSInteger)arg2 ;
+(id)presetsGivenNoMemoji;
+(id)presetsGivenOneMemojiWithIdentifier:(id)arg0 ;
+(void)filteredAndPaddedStickerRecordsWithRecents:(id)arg0 paddingMemojiIdentifier:(id)arg1 avatarStore:(id)arg2 numberOfStickers:(NSInteger)arg3 resultBlock:(id)arg4 ;


@end


#endif