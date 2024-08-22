// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERCONFIGURATIONLOCATOR_H
#define AVTSTICKERCONFIGURATIONLOCATOR_H


#import <Foundation/Foundation.h>


@interface AVTStickerConfigurationLocator : NSObject



+(BOOL)isStickerPackEmpty:(id)arg0 ;
+(id)availableStickerNamesForAnimojiNamed:(id)arg0 inStickerPack:(id)arg1 ;
+(id)stickersDefinitionsForAnimojiNamed:(id)arg0 inStickerPack:(id)arg1 ;
+(id)unavailableAnimojiNamesForStickerPack:(id)arg0 ;


@end


#endif