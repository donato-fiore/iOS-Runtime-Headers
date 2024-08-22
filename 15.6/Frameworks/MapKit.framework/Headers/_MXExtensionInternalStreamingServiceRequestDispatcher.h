// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MXEXTENSIONINTERNALSTREAMINGSERVICEREQUESTDISPATCHER_H
#define _MXEXTENSIONINTERNALSTREAMINGSERVICEREQUESTDISPATCHER_H

@class MXExtensionRequestDispatcher;



@interface _MXExtensionInternalStreamingServiceRequestDispatcher : MXExtensionRequestDispatcher



-(id)serviceProtocol;
-(void)startSendingUpdatesForRequest:(id)arg0 vendor:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForRequest:(id)arg0 vendor:(id)arg1 ;


@end


#endif