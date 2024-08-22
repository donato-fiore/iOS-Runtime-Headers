// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMFULLSCREENEFFECT_H
#define IMFULLSCREENEFFECT_H

@class UIColor, NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface IMFullScreenEffect : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor;
@property id *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) BOOL effectIsDark;
@property (readonly, nonatomic) Class effectViewClass;
@property (readonly, nonatomic, getter=isForegroundEffect) BOOL foregroundEffect;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger layerCount;
@property (readonly, nonatomic) NSArray *messageFilters; // ivar: _messageFilters
@property (nonatomic) NSUInteger messageOrientation; // ivar: _messageOrientation
@property (readonly, nonatomic) BOOL shouldDrawOverNavigationBar;
@property (readonly, nonatomic) NSURL *soundEffectFileURL; // ivar: _soundEffectFileURL
@property (readonly, nonatomic) BOOL soundEffectHasHapticTrack;
@property (weak, nonatomic) id *triggeredByObject; // ivar: _triggeredByObject
@property (nonatomic) BOOL triggeredByResponseKit; // ivar: _triggeredByResponseKit


+(id)_monochromeDimmingFilterWithType:(NSInteger)arg0 ;
+(id)bigEmojiFilter;
+(id)stickerFilter;
+(id)tapBackFilter;
-(void)prepareSoundEffect;


@end


#endif