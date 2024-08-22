// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9WIDGETKIT17WIDGETHOSTCONTEXT_H
#define _TTC9WIDGETKIT17WIDGETHOSTCONTEXT_H

@class AvocadoExtensionBaseContext;
@protocol _TtP9WidgetKit27ExtensionToHostXPCInterface_;



@interface _TtC9WidgetKit17WidgetHostContext : AvocadoExtensionBaseContext <_TtP9WidgetKit27ExtensionToHostXPCInterface_>





-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;


@end


#endif