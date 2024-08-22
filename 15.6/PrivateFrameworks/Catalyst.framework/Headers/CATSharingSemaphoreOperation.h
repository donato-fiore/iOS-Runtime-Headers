// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSHARINGSEMAPHOREOPERATION_H
#define CATSHARINGSEMAPHOREOPERATION_H



#import "CATOperation.h"

@interface CATSharingSemaphoreOperation : CATOperation



-(BOOL)isAsynchronous;
-(void)cancel;
-(void)signal;


@end


#endif