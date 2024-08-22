// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUCOUNTINGASSERTIONPROVIDER_H
#define BUCOUNTINGASSERTIONPROVIDER_H

@protocol OS_dispatch_queue, BUCountingAssertionProviderDelegate;

#import <Foundation/Foundation.h>


@interface BUCountingAssertionProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _count;
    id<BUCountingAssertionProviderDelegate> *_delegate;
}




-(BOOL)_endAssertion;
-(id)_newAssertion:(BOOL)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)newAssertion;
-(id)newExtendingAssertion;


@end


#endif