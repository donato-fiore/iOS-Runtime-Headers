// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDIAGNOSTICSTORESERVER_H
#define HDDIAGNOSTICSTORESERVER_H

@class NSString;
@protocol HKDiagnosticStoreServer;


#import "HDStandardTaskServer.h"

@interface HDDiagnosticStoreServer : HDStandardTaskServer <HKDiagnosticStoreServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchDiagnosticsWithKeys:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchURLForAnalyticsFileWithName:(id)arg0 completion:(id)arg1 ;


@end


#endif