// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSTATUSBARMANAGER_H
#define TPSTATUSBARMANAGER_H

@class NSTimer, NSString;

#import <Foundation/Foundation.h>


@interface TPStatusBarManager : NSObject

@property (retain, nonatomic) NSTimer *callDurationTimer; // ivar: _callDurationTimer
@property (copy, nonatomic) NSString *currentAbbreviatedStatusBarString; // ivar: _currentAbbreviatedStatusBarString


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateCurrentAbbreviatedStatusBarString;
-(void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;


@end


#endif