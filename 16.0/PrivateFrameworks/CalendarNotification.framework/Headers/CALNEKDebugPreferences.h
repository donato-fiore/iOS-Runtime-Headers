// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNEKDEBUGPREFERENCES_H
#define CALNEKDEBUGPREFERENCES_H

@protocol CALNDebugPreferences;

#import <Foundation/Foundation.h>


@interface CALNEKDebugPreferences : NSObject <CALNDebugPreferences>



@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;


+(id)sharedInstance;


@end


#endif