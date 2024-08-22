// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNOPENAPPLICATIONCONNECTIONOPERATION_H
#define LNOPENAPPLICATIONCONNECTIONOPERATION_H



#import "LNConnectionOperation.h"

@interface LNOpenApplicationConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithPriority:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)finishWithActionResponse:(id)arg0 error:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif