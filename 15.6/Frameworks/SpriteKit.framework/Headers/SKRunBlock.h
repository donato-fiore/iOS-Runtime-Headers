// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKRUNBLOCK_H
#define SKRUNBLOCK_H

@protocol OS_dispatch_queue;


#import "SKAction.h"

@interface SKRunBlock : SKAction {
    id *_block;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)supportsSecureCoding;
// +(id)runBlock:(id)arg0 queue:(unk)arg1  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif