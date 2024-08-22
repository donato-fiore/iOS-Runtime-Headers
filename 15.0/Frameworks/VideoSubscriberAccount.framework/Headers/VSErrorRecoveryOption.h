// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSERRORRECOVERYOPTION_H
#define VSERRORRECOVERYOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSErrorRecoveryOption : NSObject

@property (copy, nonatomic) id *attemptHandler; // ivar: _attemptHandler
@property (nonatomic, getter=isDestructive) BOOL destructive; // ivar: _destructive
@property (copy, nonatomic) NSString *localizedAlertButtonTitle; // ivar: _localizedAlertButtonTitle




@end


#endif