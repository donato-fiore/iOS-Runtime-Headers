// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INHANDLEINTENTFORWARDINGACTION_H
#define INHANDLEINTENTFORWARDINGACTION_H



#import "INIntentForwardingAction.h"

@interface INHandleIntentForwardingAction : INIntentForwardingAction



+(Class)responseClass;
-(BOOL)executeRemotelyWithVendorRemote:(id)arg0 completionHandler:(id)arg1 ;
-(id)_completionHandlerWithActionCompletionHandler:(SEL)arg0 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif