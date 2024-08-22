// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSTOPSENDINGUPDATESFORWARDINGACTION_H
#define INSTOPSENDINGUPDATESFORWARDINGACTION_H



#import "INIntentForwardingAction.h"

@interface INStopSendingUpdatesForwardingAction : INIntentForwardingAction



+(Class)responseClass;
-(BOOL)executeRemotelyWithVendorRemote:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif