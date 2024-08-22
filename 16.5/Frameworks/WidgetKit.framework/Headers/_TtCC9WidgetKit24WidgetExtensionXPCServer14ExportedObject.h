// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC9WIDGETKIT24WIDGETEXTENSIONXPCSERVER14EXPORTEDOBJECT_H
#define _TTCC9WIDGETKIT24WIDGETEXTENSIONXPCSERVER14EXPORTEDOBJECT_H

@protocol _TtP9WidgetKit27HostToExtensionXPCInterface_;

#import <Foundation/Foundation.h>


@interface _TtCC9WidgetKit24WidgetExtensionXPCServer14ExportedObject : NSObject <_TtP9WidgetKit27HostToExtensionXPCInterface_>

 {
    ? previewAgent;
    ? urlHandlers;
    ? xpcConnection;
}




-(id)init;
-(void)attachPreviewAgentWithFrameworkPath:(id)arg0 endpoint:(id)arg1 handler:(id)arg2 ;
-(void)getAllCurrentDescriptorsWithCompletion:(id)arg0 ;
-(void)getCurrentDescriptorsWithCompletion:(id)arg0 ;
-(void)getPlaceholdersWithRequests:(id)arg0 completion:(id)arg1 ;
-(void)getTimelinesWithRequests:(id)arg0 isPreview:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleURLSessionEventsFor:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)performCleanup;


@end


#endif