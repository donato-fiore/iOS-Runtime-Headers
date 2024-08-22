// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEMPERATUREUNITREQUEST_H
#define WFTEMPERATUREUNITREQUEST_H



#import "WFTask.h"

@interface WFTemperatureUnitRequest : WFTask

@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(BOOL)requiresResponse;
-(id)initWithResultHandler:(id)arg0 ;
-(void)cleanup;
-(void)handleCancellation;
-(void)handleError:(id)arg0 forResponseIdentifier:(id)arg1 ;
-(void)handleResponse:(id)arg0 ;
-(void)startWithService:(id)arg0 ;


@end


#endif