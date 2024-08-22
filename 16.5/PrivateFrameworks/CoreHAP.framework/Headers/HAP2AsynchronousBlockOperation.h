// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ASYNCHRONOUSBLOCKOPERATION_H
#define HAP2ASYNCHRONOUSBLOCKOPERATION_H



#import "HAP2AsynchronousOperation.h"

@interface HAP2AsynchronousBlockOperation : HAP2AsynchronousOperation {
    id *_block;
}




-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 activity:(id)arg1 ;
-(id)initWithName:(id)arg0 activity:(id)arg1 block:(id)arg2 ;
-(id)initWithName:(id)arg0 block:(id)arg1 ;
-(id)initWithName:(id)arg0 optionalActivity:(id)arg1 ;
-(void)main;


@end


#endif