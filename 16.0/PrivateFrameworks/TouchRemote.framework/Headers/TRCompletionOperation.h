// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRCOMPLETIONOPERATION_H
#define TRCOMPLETIONOPERATION_H



#import "TROperation.h"

@interface TRCompletionOperation : TROperation

@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (nonatomic) BOOL success; // ivar: _success


-(void)execute;


@end


#endif