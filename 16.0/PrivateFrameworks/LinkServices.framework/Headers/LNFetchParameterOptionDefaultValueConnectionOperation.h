// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHPARAMETEROPTIONDEFAULTVALUECONNECTIONOPERATION_H
#define LNFETCHPARAMETEROPTIONDEFAULTVALUECONNECTIONOPERATION_H

@class NSString;


#import "LNRuntimeAssertionsTakingConnectionOperation.h"
#import "LNDynamicOption.h"

@interface LNFetchParameterOptionDefaultValueConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *parameterIdentifier; // ivar: _parameterIdentifier
@property (copy, nonatomic) LNDynamicOption *result; // ivar: _result


-(id)initWithConnectionInterface:(id)arg0 actionMetadata:(id)arg1 parameterIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif