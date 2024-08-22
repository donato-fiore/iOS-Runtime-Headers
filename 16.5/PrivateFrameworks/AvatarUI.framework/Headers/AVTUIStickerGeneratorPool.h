// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTUISTICKERGENERATORPOOL_H
#define AVTUISTICKERGENERATORPOOL_H

@class NSMutableDictionary;
@protocol AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTUIStickerGeneratorPool : NSObject

@property (readonly, nonatomic) NSMutableDictionary *availableStickerGenerators; // ivar: _availableStickerGenerators
@property (readonly, nonatomic) NSMutableDictionary *inUseStickerGenerators; // ivar: _inUseStickerGenerators
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSInteger maxCount; // ivar: _maxCount


+(id)cacheKeyForAvatarRecord:(id)arg0 ;
-(id)avatarForRecord:(id)arg0 ;
-(id)dequeueStickerGeneratorForAvatarRecord:(id)arg0 ;
-(id)dequeueStickerGeneratorForAvatarRecord:(id)arg0 needAvatar:(BOOL)arg1 ;
-(id)generatorForAvatarRecord:(id)arg0 inGenerators:(id)arg1 ;
-(id)initWithMaxStickerGeneratorCount:(NSInteger)arg0 ;
-(id)initWithMaxStickerGeneratorCount:(NSInteger)arg0 logger:(id)arg1 ;
-(id)stealGeneratorForAvatarRecord:(id)arg0 inGenerators:(id)arg1 needAvatar:(BOOL)arg2 ;
-(void)didStopUsingStickerGeneratorForRecord:(id)arg0 ;
-(void)flush;
-(void)flushGeneratorForKey:(id)arg0 ;
-(void)flushGeneratorForRecord:(id)arg0 ;


@end


#endif