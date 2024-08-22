// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCWIDGETCONTROLLER_H
#define NCWIDGETCONTROLLER_H

@class NSXPCConnection;
@protocol _NCWidgetController_Service_IPC;

#import <Foundation/Foundation.h>

#import "NCWidgetController.h"

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC>



@property (retain, nonatomic, getter=_connection, setter=_setConnection:) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic, getter=_strongReference, setter=_setStrongReference:) NCWidgetController *strongReference; // ivar: _strongReference


+(id)widgetContentUnavailableViewWithButtonTitle:(id)arg0 buttonAction:(id)arg1 ;
+(id)widgetContentUnavailableViewWithTitle:(id)arg0 ;
+(id)widgetController;
-(void)__didReceiveHasContentRequest;
-(void)_invalidateConnection;
-(void)dealloc;
-(void)requestRefreshAfterDate:(id)arg0 forWidgetWithBundleIdentifier:(id)arg1 ;
-(void)setHasContent:(BOOL)arg0 forWidgetWithBundleIdentifier:(id)arg1 ;


@end


#endif