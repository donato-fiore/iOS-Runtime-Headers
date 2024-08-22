// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSAFETYBLOCK_H
#define AFSAFETYBLOCK_H


#import <Foundation/Foundation.h>


@interface AFSafetyBlock : NSObject {
    atomic_flag _hasInvoked;
    id *_block;
}




-(BOOL)invoke;
-(BOOL)invokeWithSignal:(NSInteger)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif