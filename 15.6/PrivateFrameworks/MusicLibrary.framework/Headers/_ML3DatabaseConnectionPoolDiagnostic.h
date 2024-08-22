// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ML3DATABASECONNECTIONPOOLDIAGNOSTIC_H
#define _ML3DATABASECONNECTIONPOOLDIAGNOSTIC_H

@class NSArray;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject <NSMutableCopying>



@property (readonly, nonatomic) NSArray *readerAvailableConnections; // ivar: _readerAvailableConnections
@property (readonly, nonatomic) NSArray *readerBusyConnections; // ivar: _readerBusyConnections
@property (readonly, nonatomic) NSArray *writerAvailableConnections; // ivar: _writerAvailableConnections
@property (readonly, nonatomic) NSArray *writerBusyConnections; // ivar: _writerBusyConnections


-(id)_copyWithZone:(struct _NSZone *)arg0 usingConcreteClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif