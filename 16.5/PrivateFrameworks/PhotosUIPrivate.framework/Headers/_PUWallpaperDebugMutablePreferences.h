// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUWALLPAPERDEBUGMUTABLEPREFERENCES_H
#define _PUWALLPAPERDEBUGMUTABLEPREFERENCES_H

@class NSString, UIColor, UIFont;
@protocol PUWallpaperMutablePreferences;

#import <Foundation/Foundation.h>


@interface _PUWallpaperDebugMutablePreferences : NSObject <PUWallpaperMutablePreferences>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger significantEventOptions; // ivar: _significantEventOptions
@property (nonatomic) NSUInteger significantEventTime; // ivar: _significantEventTime
@property (retain, nonatomic) UIColor *statusBarTintColor; // ivar: _statusBarTintColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *timeColor; // ivar: _timeColor
@property (retain, nonatomic) UIFont *timeFont; // ivar: _timeFont




@end


#endif