// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONLANDINGVIEWSETTINGS_H
#define UIDICTATIONLANDINGVIEWSETTINGS_H


#import <Foundation/Foundation.h>


@interface UIDictationLandingViewSettings : NSObject

@property (nonatomic) CGFloat circleRPM; // ivar: _circleRPM
@property (nonatomic) CGFloat colorTransitionInDuration; // ivar: _colorTransitionInDuration
@property (nonatomic) CGFloat colorTransitionOutDuration; // ivar: _colorTransitionOutDuration
@property (nonatomic) CGFloat fadeInDuration; // ivar: _fadeInDuration
@property (nonatomic) CGFloat fadeOutDuration; // ivar: _fadeOutDuration
@property (nonatomic) CGFloat shrinkDuration; // ivar: _shrinkDuration
@property (nonatomic) BOOL useBlackWave; // ivar: _useBlackWave


+(id)sharedInstance;
-(id)init;


@end


#endif