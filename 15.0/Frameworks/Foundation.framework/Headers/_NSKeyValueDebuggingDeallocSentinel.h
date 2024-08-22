// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSKEYVALUEDEBUGGINGDEALLOCSENTINEL_H
#define _NSKEYVALUEDEBUGGINGDEALLOCSENTINEL_H


#import <Foundation/Foundation.h>


@interface _NSKeyValueDebuggingDeallocSentinel : NSObject {
    uint8_t _isInvalid;
    NSUInteger _objectPointer;
    id *_callbackBlock;
}




+(void)_invalidateSentinelWithKey:(*void)arg0 fromObject:(id)arg1 ;
-(id)initWithObjectPointer:(NSUInteger)arg0 callbackBlock:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif