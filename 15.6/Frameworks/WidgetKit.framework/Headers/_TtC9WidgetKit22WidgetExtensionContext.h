// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9WIDGETKIT22WIDGETEXTENSIONCONTEXT_H
#define _TTC9WIDGETKIT22WIDGETEXTENSIONCONTEXT_H

@class AvocadoExtensionBaseContext;
@protocol _TtP9WidgetKit27HostToExtensionXPCInterface_;



@interface _TtC9WidgetKit22WidgetExtensionContext : AvocadoExtensionBaseContext <_TtP9WidgetKit27HostToExtensionXPCInterface_>

 {
    ? previewAgent;
    ? urlHandlers;
}




-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)attachPreviewAgentWithFrameworkPath:(id)arg0 endpoint:(id)arg1 handler:(id)arg2 ;
-(void)getDescriptorsWithCompletion:(id)arg0 ;
-(void)getPlaceholdersWithEnvironment:(id)arg0 for:(id)arg1 completion:(id)arg2 ;
-(void)getTimelinesWithRequests:(id)arg0 isPreview:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleURLSessionEventsFor:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)performCleanup;


@end


#endif