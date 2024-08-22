// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CATLONGRUNNINGTASKOPERATION_H
#define _CATLONGRUNNINGTASKOPERATION_H



#import "CATTaskOperation.h"

@interface _CATLongRunningTaskOperation : CATTaskOperation



-(BOOL)isAsynchronous;
-(void)cancel;
-(void)main;


@end


#endif