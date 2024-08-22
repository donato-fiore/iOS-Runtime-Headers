// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTROUTEDATASOURCE_H
#define HKWORKOUTROUTEDATASOURCE_H

@class NSString, NSUUID;
@protocol _HKXPCExportable, HKWorkoutRouteDataSourceClientInterface, HKWorkoutDataSource, HKWorkoutRouteDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKWorkoutRouteDataSource : NSObject <_HKXPCExportable, HKWorkoutRouteDataSourceClientInterface, HKWorkoutDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKWorkoutRouteDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverIdentifier;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithWorkoutSession:(id)arg0 ;
-(id)remoteInterface;
-(void)clientRemote_didUpdateAltitude:(id)arg0 ;
-(void)clientRemote_didUpdateElevation:(id)arg0 ;
-(void)clientRemote_didUpdateRoute:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)workoutBuilderDidFinish;


@end


#endif