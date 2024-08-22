// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHDATABASEASSERTIONCLIENT_H
#define ACHDATABASEASSERTIONCLIENT_H

@class NSString, NSUUID, HKTaskServerProxyProvider;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface ACHDatabaseAssertionClient : NSObject <_HKXPCExportable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


-(BOOL)invalidateAssertionWithToken:(id)arg0 error:(*id)arg1 ;
-(id)acquireDatabaseAssertionWithIdentifier:(id)arg0 duration:(CGFloat)arg1 error:(*id)arg2 ;
-(id)acquireDatabaseAssertionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;


@end


#endif