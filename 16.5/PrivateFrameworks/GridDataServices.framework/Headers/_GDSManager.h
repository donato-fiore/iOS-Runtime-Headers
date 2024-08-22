// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSMANAGER_H
#define _GDSMANAGER_H

@class NSString, NSXPCConnection, NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface _GDSManager : NSObject

@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSDictionary *currentMarginalForecast; // ivar: _currentMarginalForecast
@property (retain, nonatomic) NSString *locBundlePath; // ivar: _locBundlePath
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(id)managerWithID:(id)arg0 locationBundlePath:(id)arg1 ;
-(id)carbonIntensityHistoryForBA:(id)arg0 from:(id)arg1 to:(id)arg2 ;
-(id)getFakeMarginalEmissionForecast;
-(id)init;
-(id)initWithID:(id)arg0 locationBundlePath:(id)arg1 ;
-(id)latestBalancingAuthority;
-(id)latestBalancingAuthorityWithError:(*id)arg0 ;
-(id)latestMarginalEmissionForecast;
-(void)dealloc;
-(void)fixMarginalEmissionForecast:(id)arg0 ;
-(void)registerClientID:(id)arg0 locationBundlePath:(id)arg1 ;
-(void)setFakeSecret:(id)arg0 ;
-(void)setFakeSecretVersion:(id)arg0 ;
-(void)triggerBAUpdateWithHandler:(id)arg0 ;
-(void)unFixMarginalEmissionForecast;
-(void)unSetFakeSecret;
-(void)unSetFakeSecretVersion;


@end


#endif