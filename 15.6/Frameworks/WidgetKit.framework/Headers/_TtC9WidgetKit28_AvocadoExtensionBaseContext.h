// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9WIDGETKIT28_AVOCADOEXTENSIONBASECONTEXT_H
#define _TTC9WIDGETKIT28_AVOCADOEXTENSIONBASECONTEXT_H

@class NSExtensionContext;
@protocol EXExtensionContextHostConfigurationProviding;



@interface _TtC9WidgetKit28_AvocadoExtensionBaseContext : NSExtensionContext <EXExtensionContextHostConfigurationProviding>





+(BOOL)_shouldSendHostApplicationStateNotifications;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;


@end


#endif