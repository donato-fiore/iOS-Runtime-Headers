// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATABASECONTROLSERVER_H
#define HDDATABASECONTROLSERVER_H

@class NSString;
@protocol HKDatabaseControlServer;


#import "HDStandardTaskServer.h"

@interface HDDatabaseControlServer : HDStandardTaskServer <HKDatabaseControlServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_getHealthDatabaseIdentifierWithCompletion:(id)arg0 ;
-(void)remote_getHealthDirectorySizeInBytesWithCompletion:(id)arg0 ;
-(void)remote_obliterateHealthDataWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_performMigrationWithCompletion:(id)arg0 ;


@end


#endif