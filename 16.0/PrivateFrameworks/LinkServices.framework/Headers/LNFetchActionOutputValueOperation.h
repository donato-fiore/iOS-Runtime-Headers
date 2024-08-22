// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHACTIONOUTPUTVALUEOPERATION_H
#define LNFETCHACTIONOUTPUTVALUEOPERATION_H

@class LNValue;


#import "LNConnectionOperation.h"
#import "LNActionOutput.h"

@interface LNFetchActionOutputValueOperation : LNConnectionOperation

@property (retain, nonatomic) LNActionOutput *actionOutput; // ivar: _actionOutput
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) LNValue *value; // ivar: _value


-(id)initWithConnectionInterface:(id)arg0 actionOutput:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif