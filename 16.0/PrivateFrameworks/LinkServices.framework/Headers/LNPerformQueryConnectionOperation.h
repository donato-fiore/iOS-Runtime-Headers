// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNPERFORMQUERYCONNECTIONOPERATION_H
#define LNPERFORMQUERYCONNECTIONOPERATION_H



#import "LNConnectionOperation.h"
#import "LNQueryOutput.h"
#import "LNQueryRequest.h"

@interface LNPerformQueryConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) LNQueryOutput *output; // ivar: _output
@property (readonly, nonatomic) LNQueryRequest *queryRequest; // ivar: _queryRequest


-(id)initWithConnectionInterface:(id)arg0 query:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif