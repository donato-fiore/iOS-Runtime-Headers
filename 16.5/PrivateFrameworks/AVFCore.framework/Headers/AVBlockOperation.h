// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVBLOCKOPERATION_H
#define AVBLOCKOPERATION_H



#import "AVOperation.h"

@interface AVBlockOperation : AVOperation {
    id *_block;
}




-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif