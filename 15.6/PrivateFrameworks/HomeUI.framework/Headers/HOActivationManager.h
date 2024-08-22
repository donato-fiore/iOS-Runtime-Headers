// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOACTIVATIONMANAGER_H
#define HOACTIVATIONMANAGER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HOActivationManager : NSObject

@property (retain, nonatomic) NSDate *lastEnteredForegroundDate; // ivar: _lastEnteredForegroundDate


+(id)sharedInstance;
-(id)init;
-(void)_enteredForeground:(id)arg0 ;


@end


#endif