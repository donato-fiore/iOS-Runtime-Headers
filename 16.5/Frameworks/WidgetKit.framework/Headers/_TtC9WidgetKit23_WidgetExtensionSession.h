// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9WIDGETKIT23_WIDGETEXTENSIONSESSION_H
#define _TTC9WIDGETKIT23_WIDGETEXTENSIONSESSION_H

@class SwiftObject;
@protocol _TtP9WidgetKit22WidgetExtensionSession_;



@interface _TtC9WidgetKit23_WidgetExtensionSession : SwiftObject <_TtP9WidgetKit22WidgetExtensionSession_>

 {
    ? extensionIdentity;
    ? extensionProcess;
    ? sessionUUID;
    ? loggingIdentifier;
    ? lock;
    ? subscriptions;
    ? watchdogTimeoutQueue;
    ? watchdogTimeoutProvider;
    ? rbsInterface;
    ? suspensionObserver;
    ? shouldTakeExtensionAssertion;
    ? widgetExtensionAssertion;
    ? bundleProvider;
    ? lock_invalidated;
    ? connection;
}




-(void)attachPreviewAgentWithFrameworkPath:(id)arg0 endpoint:(id)arg1 handler:(id)arg2 ;
-(void)getActivitiesWithRequests:(id)arg0 completion:(id)arg1 ;
-(void)getAllCurrentDescriptorsWithCompletion:(id)arg0 ;
-(void)getCurrentDescriptorsWithCompletion:(id)arg0 ;
-(void)getDescriptorsWithCompletion:(id)arg0 ;
-(void)getPlaceholdersForRequests:(id)arg0 inEnvironment:(id)arg1 completion:(id)arg2 ;
-(void)getPlaceholdersWithEnvironment:(id)arg0 for:(id)arg1 completion:(id)arg2 ;
-(void)getPlaceholdersWithRequests:(id)arg0 completion:(id)arg1 ;
-(void)getTimelineFor:(id)arg0 into:(id)arg1 environment:(id)arg2 isPreview:(BOOL)arg3 completion:(id)arg4 ;
-(void)getTimelinesWithRequests:(id)arg0 isPreview:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleURLSessionEventsFor:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;


@end


#endif