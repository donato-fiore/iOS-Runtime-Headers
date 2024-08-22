// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUIHINTSSTYLE_H
#define TVRUIHINTSSTYLE_H


#import <Foundation/Foundation.h>


@interface TVRUIHintsStyle : NSObject

@property (nonatomic) BOOL hasHomeButton; // ivar: _hasHomeButton


+(id)styleProviderForUserInterfaceIdiom:(NSInteger)arg0 hasHomeButton:(BOOL)arg1 ;
-(BOOL)shouldShowSiriHint;
-(BOOL)shouldShowVolumeHint;
-(CGFloat)activationAnimationDismissalDelay;
-(CGFloat)activationAnimationDuration;
-(CGFloat)animationDuration;
-(CGFloat)animationPresentationDelay;
-(CGFloat)maximumSymbolPointSize;
-(CGFloat)preferredTipWidth;
-(NSInteger)userInterfaceStyle;
-(id)initWithHomeButton:(BOOL)arg0 ;
-(id)siriHintTipContext;


@end


#endif