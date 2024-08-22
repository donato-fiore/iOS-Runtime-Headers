// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKTASKASSERTION_H
#define SBKTASKASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SBKProcessAssertion.h"

@interface SBKTaskAssertion : NSObject {
    id *_expireHandler;
    NSString *_debugInfo;
    SBKProcessAssertion *_processAssertion;
}




// +(id)newBackgroundTaskWithExpirationHandler:(id)arg0 debugInfo:(unk)arg1  ;
-(id)description;
// -(id)initWithExpirationHandler:(id)arg0 debugInfo:(unk)arg1  ;
-(void)dealloc;
-(void)invalidate;
-(void)performExpirationHandler;


@end


#endif