// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHMDMPROPERTIESCONNECTIONOPERATION_H
#define LNFETCHMDMPROPERTIESCONNECTIONOPERATION_H

@class NSString, LNAction;


#import "LNConnectionOperation.h"

@interface LNFetchMDMPropertiesConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithConnectionInterface:(id)arg0 action:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif