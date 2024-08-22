// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATABASEVALIDATIONTASKSERVER_H
#define HDDATABASEVALIDATIONTASKSERVER_H

@protocol HKDatabaseValidationTaskServerInterface;


#import "HDStandardTaskServer.h"

@interface HDDatabaseValidationTaskServer : HDStandardTaskServer <HKDatabaseValidationTaskServerInterface>





+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
// -(void)remote_validateDatabase:(NSInteger)arg0 clientCompletionHandler:(id)arg1 errorHandlerIdentifier:(unk)arg2  ;
// -(void)remote_validateEntitiesWithClientCompletionHandler:(id)arg0 errorHandlerIdentifier:(unk)arg1  ;


@end


#endif