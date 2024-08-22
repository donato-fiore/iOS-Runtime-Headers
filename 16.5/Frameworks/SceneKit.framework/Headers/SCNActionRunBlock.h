// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNACTIONRUNBLOCK_H
#define SCNACTIONRUNBLOCK_H

@protocol OS_dispatch_queue;


#import "SCNAction.h"

@interface SCNActionRunBlock : SCNAction {
    id *_block;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)supportsSecureCoding;
// +(id)runBlock:(id)arg0 queue:(unk)arg1  ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif