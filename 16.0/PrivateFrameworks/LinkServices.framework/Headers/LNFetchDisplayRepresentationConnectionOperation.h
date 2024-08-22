// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHDISPLAYREPRESENTATIONCONNECTIONOPERATION_H
#define LNFETCHDISPLAYREPRESENTATIONCONNECTIONOPERATION_H

@class NSArray;


#import "LNConnectionOperation.h"

@interface LNFetchDisplayRepresentationConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *results; // ivar: _results


-(id)initWithConnectionInterface:(id)arg0 actions:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif