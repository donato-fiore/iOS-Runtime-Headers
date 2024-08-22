// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFAUTOMATIONCONTROLLER_H
#define _SFAUTOMATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface _SFAutomationController : NSObject

@property (nonatomic) BOOL allowsRemoteAutomation;


+(BOOL)isSystemRemoteAutomationEnabled;


@end


#endif