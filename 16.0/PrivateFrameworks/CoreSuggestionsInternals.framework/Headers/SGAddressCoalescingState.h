// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGADDRESSCOALESCINGSTATE_H
#define SGADDRESSCOALESCINGSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGAddressCoalescingState : NSObject {
    NSInteger _lastAddressIndex;
    NSInteger _lastAddressEndPos;
    ? _lastResult;
}


@property (retain, nonatomic) NSArray *matches; // ivar: _matches


-(id)init;
-(void)coalesceAddress:(struct __DDResult *)arg0 orAppendMatch:(id)arg1 ;
-(void)dealloc;


@end


#endif