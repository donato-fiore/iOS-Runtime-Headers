// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27DIAGNOSTICSREPORTERSERVICES30REMOTEALERTDEACTIVATIONHANDLER_H
#define _TTC27DIAGNOSTICSREPORTERSERVICES30REMOTEALERTDEACTIVATIONHANDLER_H

@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>


@interface _TtC27DiagnosticsReporterServices30RemoteAlertDeactivationHandler : NSObject <SBSRemoteAlertHandleObserver>

 {
    ? completion;
}




-(id)init;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif