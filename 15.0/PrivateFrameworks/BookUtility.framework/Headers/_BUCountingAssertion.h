// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BUCOUNTINGASSERTION_H
#define _BUCOUNTINGASSERTION_H

@class NSString;
@protocol BUAssertion, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _BUCountingAssertion : NSObject <BUAssertion>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif