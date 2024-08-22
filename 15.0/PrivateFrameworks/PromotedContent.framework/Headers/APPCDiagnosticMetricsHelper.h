// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCDIAGNOSTICMETRICSHELPER_H
#define APPCDIAGNOSTICMETRICSHELPER_H

@protocol APPCDiagnosticMetricsHelping, APPCMetricRegister;

#import <Foundation/Foundation.h>


@interface APPCDiagnosticMetricsHelper : NSObject <APPCDiagnosticMetricsHelping, APPCMetricRegister>

 {
    ? contextIdentifier;
    ? promotedContentIdentifier;
    ? primitiveCreator;
    ? notificationOwner;
}




-(id)init;
-(id)initWithContextIdentifier:(id)arg0 promotedContentIdentifier:(id)arg1 primitiveCreator:(id)arg2 notificationOwner:(id)arg3 ;
-(void)loadFailedWithReason:(id)arg0 code:(NSInteger)arg1 ;
-(void)mediaPlaybackFailedWithReason:(id)arg0 ;
-(void)registerHandlerForAllMetricsWithClosure:(id)arg0 ;
-(void)removeHandler;
-(void)templateMetricWithName:(id)arg0 argument:(id)arg1 ;


@end


#endif