// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIDLETIMERASSERTION_H
#define PKIDLETIMERASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PKIdleTimerAssertion : NSObject {
    atomic_flag _invalidated;
    NSString *_reason;
    id<BSInvalidatable> *_idleTimerAssertion;
}




-(id)init;
-(id)initWithReason:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif