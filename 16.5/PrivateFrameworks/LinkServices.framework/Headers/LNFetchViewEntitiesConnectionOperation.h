// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNFETCHVIEWENTITIESCONNECTIONOPERATION_H
#define LNFETCHVIEWENTITIESCONNECTIONOPERATION_H

@class NSArray;


#import "LNInterfaceConnectionOperation.h"

@interface LNFetchViewEntitiesConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy) NSArray *interactionIDs; // ivar: _interactionIDs
@property (retain, nonatomic) NSArray *result; // ivar: _result


-(id)initWithConnectionInterface:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithConnectionInterface:(id)arg0 interactionIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif