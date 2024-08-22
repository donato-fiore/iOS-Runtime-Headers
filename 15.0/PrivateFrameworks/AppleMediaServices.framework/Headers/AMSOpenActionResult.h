// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSOPENACTIONRESULT_H
#define AMSOPENACTIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AMSURLAction.h"

@interface AMSOpenActionResult : NSObject

@property (retain, nonatomic) AMSURLAction *action; // ivar: _action
@property (retain, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (nonatomic) BOOL engagementPresented; // ivar: _engagementPresented
@property (nonatomic) BOOL interruptionResult; // ivar: _interruptionResult




@end


#endif