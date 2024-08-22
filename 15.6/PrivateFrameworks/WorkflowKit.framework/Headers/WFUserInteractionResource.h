// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUSERINTERACTIONRESOURCE_H
#define WFUSERINTERACTIONRESOURCE_H

@protocol WFApplicationStateObserver;


#import "WFResource.h"

@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>





+(BOOL)isSingleton;
-(id)initWithDefinition:(id)arg0 ;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)dealloc;
-(void)refreshAvailability;


@end


#endif