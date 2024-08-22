// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTERCHANGEACTIONPROVIDER_H
#define WFINTERCHANGEACTIONPROVIDER_H



#import "WFActionProvider.h"

@interface WFInterchangeActionProvider : WFActionProvider



-(id)actionWithInterchangeAction:(id)arg0 serializedParameters:(id)arg1 ;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg0 ;
-(void)deleteCache;
-(void)updateCache:(id)arg0 ;


@end


#endif