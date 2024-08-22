// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDELAYOPERATION_H
#define GKDELAYOPERATION_H

@class NSOperation;



@interface GKDelayOperation : NSOperation

@property (nonatomic) CGFloat delayInSec; // ivar: _delayInSec
@property (copy, nonatomic) id *operation; // ivar: _operation


-(id)initWithDelay:(CGFloat)arg0 andOperation:(id)arg1 ;
-(void)main;


@end


#endif