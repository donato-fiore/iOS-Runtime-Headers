// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMACCESSIBILITYMANAGER_H
#define MDMACCESSIBILITYMANAGER_H


#import <Foundation/Foundation.h>


@interface MDMAccessibilityManager : NSObject

@property (nonatomic) BOOL boldTextEnabled;
@property (nonatomic) BOOL grayscaleEnabled; // ivar: _grayscaleEnabled
@property (nonatomic) BOOL increaseContrastEnabled;
@property (nonatomic) BOOL reduceMotionEnabled;
@property (nonatomic) BOOL reduceTransparencyEnabled;
@property (nonatomic) NSInteger textSize;
@property (nonatomic) BOOL touchAccommodationsEnabled;
@property (nonatomic) BOOL voiceOverEnabled;
@property (nonatomic) BOOL zoomEnabled;


+(id)sharedInstance;
-(BOOL)isValidTextSize:(NSInteger)arg0 ;


@end


#endif