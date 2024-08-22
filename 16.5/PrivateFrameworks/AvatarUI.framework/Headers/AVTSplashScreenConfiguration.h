// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSPLASHSCREENCONFIGURATION_H
#define AVTSPLASHSCREENCONFIGURATION_H

@class NSString, AVPlayerItem;

#import <Foundation/Foundation.h>


@interface AVTSplashScreenConfiguration : NSObject

@property (retain, nonatomic) NSString *buttonString; // ivar: _buttonString
@property (retain, nonatomic) AVPlayerItem *primaryPlayerItem; // ivar: _primaryPlayerItem
@property (retain, nonatomic) AVPlayerItem *secondaryPlayerItem; // ivar: _secondaryPlayerItem
@property (retain, nonatomic) NSString *subTitleString; // ivar: _subTitleString
@property (retain, nonatomic) NSString *titleString; // ivar: _titleString




@end


#endif