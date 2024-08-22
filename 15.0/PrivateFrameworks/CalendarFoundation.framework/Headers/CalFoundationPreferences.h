// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALFOUNDATIONPREFERENCES_H
#define CALFOUNDATIONPREFERENCES_H

@class NSString, NSArray, NSDateComponents;

#import <Foundation/Foundation.h>

#import "CalPreferences.h"

@interface CalFoundationPreferences : NSObject {
    CalPreferences *_preferences;
}


@property (readonly, nonatomic) BOOL logAutoFlush;
@property (readonly, nonatomic) NSString *logFilePath;
@property (readonly, nonatomic) NSArray *logSimpleConfiguration;
@property (nonatomic) CGFloat simulatedDateForNowOffset;
@property (retain, nonatomic) NSString *stopTimeDemoMode;
@property (readonly, nonatomic) BOOL stopTimeDemoModeActive;
@property (readonly, nonatomic) NSDateComponents *stopTimeDemoModeComponents;


+(id)shared;
-(id)init;


@end


#endif