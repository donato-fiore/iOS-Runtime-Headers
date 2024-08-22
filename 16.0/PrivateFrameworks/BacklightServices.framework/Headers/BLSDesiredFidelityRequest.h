// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSDESIREDFIDELITYREQUEST_H
#define BLSDESIREDFIDELITYREQUEST_H


#import <Foundation/Foundation.h>


@interface BLSDesiredFidelityRequest : NSObject {
    id *_completion;
    os_unfair_lock_s _lock;
    BOOL _lock_completed;
}




-(id)initWithCompletion:(id)arg0 ;
-(void)completeWithDesiredFidelity:(NSInteger)arg0 ;


@end


#endif