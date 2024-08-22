// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PUWALLPAPERPOSTEREDITORDEBUGPREFERENCES_H
#define _PUWALLPAPERPOSTEREDITORDEBUGPREFERENCES_H

@class NSString, UIColor, UIFont;
@protocol PUMutableWallpaperEditorPreferences;

#import <Foundation/Foundation.h>


@interface _PUWallpaperPosterEditorDebugPreferences : NSObject <PUMutableWallpaperEditorPreferences>



@property (nonatomic) NSUInteger currentLookIndex; // ivar: _currentLookIndex
@property (copy, nonatomic) NSString *currentLookName; // ivar: _currentLookName
@property (nonatomic) NSUInteger numberOfLooks; // ivar: _numberOfLooks
@property (retain, nonatomic) UIColor *statusBarTintColor; // ivar: _statusBarTintColor
@property (retain, nonatomic) UIColor *timeColor; // ivar: _timeColor
@property (retain, nonatomic) UIFont *timeFont; // ivar: _timeFont




@end


#endif