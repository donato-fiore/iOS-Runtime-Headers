// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ML3MUTABLEDATABASECONNECTIONPOOLDIAGNOSTIC_H
#define _ML3MUTABLEDATABASECONNECTIONPOOLDIAGNOSTIC_H

@class ML3DatabaseConnectionPoolDiagnostic, NSArray;



@interface _ML3MutableDatabaseConnectionPoolDiagnostic : ML3DatabaseConnectionPoolDiagnostic

@property (copy, nonatomic) NSArray *readerAvailableConnections;
@property (copy, nonatomic) NSArray *readerBusyConnections;
@property (copy, nonatomic) NSArray *writerAvailableConnections;
@property (copy, nonatomic) NSArray *writerBusyConnections;




@end


#endif